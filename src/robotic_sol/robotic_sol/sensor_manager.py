#!usr/env/bin python3

import socket
import sys
import rclpy
import numpy as np
from rclpy.node import Node
from robotic_sol_interfaces.srv import GetSensorData
import asyncio
import threading


class SensorManager(Node):
    def __init__(self):
        super().__init__('sensor_reader')
        self.latest_data = []
        
        # Set server addresses and sample sizes for the two sensors
        self.server_addresses = [(('127.0.0.3', 10000), 8), (('127.0.0.1', 10000), 16)] 
        self.prevData = [0,0]
        self.prevDataCounter = [0,0]
        for i in range(len(self.server_addresses)):
            self.latest_data.append([])
            self.create_service(GetSensorData, f'sensor_data{i}', self.retrieve_sensor_data_callback)
        
        self.loop_thread = threading.Thread(target=self.run_asyncio_loop, daemon=True)
        self.loop_thread.start()

    def run_asyncio_loop(self):
        loop = asyncio.new_event_loop()
        asyncio.set_event_loop(loop)
        for idx, socketInfo in enumerate(self.server_addresses):
            serverInfo = socketInfo[0]
            loop.create_task(self.async_connect(serverInfo, idx, socketInfo[1]))
        loop.run_forever()

    async def async_connect(self, socketInfo, idx, number_of_samples):
        try:
            # Non-blocking socket for asynchronous communication 
            sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            sock.setblocking(False)
            await asyncio.wait_for(asyncio.get_event_loop().sock_connect(sock, socketInfo), timeout=10)
            self.get_logger().info("Successfully connected!")

            while True:
                message = f"{str(number_of_samples)}\n".encode() # Delimiter to frame messages
                await asyncio.get_event_loop().sock_sendall(sock, message)
                byte_data = await asyncio.get_event_loop().sock_recv(sock, 3*number_of_samples*8)
                data = np.frombuffer(byte_data, dtype=np.float64) 
                data_filtered = data.reshape(-1, 3)[-1].tolist()
                self.latest_data[idx] = data_filtered
            sock.close()
        except Exception as e:
            self.get_logger().warn(f'Connection failed {e}')

    def retrieve_sensor_data_callback(self, rqst, response):
        response.data = self.latest_data[rqst.sensor_index]
        if self.latest_data[rqst.sensor_index] == self.prevData[rqst.sensor_index]:
            self.prevDataCounter[rqst.sensor_index]+=1
        else:
            print(f"{rqst.sensor_index}: {self.prevDataCounter[rqst.sensor_index]}")
            self.prevData[rqst.sensor_index]=self.latest_data[rqst.sensor_index]
            self.prevDataCounter[rqst.sensor_index]=0
        return response
    

def main(args=None):
    rclpy.init(args=args)
    node = SensorManager()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()