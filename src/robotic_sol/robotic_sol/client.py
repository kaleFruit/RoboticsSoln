#!usr/env/bin python3

import rclpy
import numpy as np
from rclpy.node import Node
from robotic_sol_interfaces.srv import GetSensorData
from robotic_sol_interfaces.msg import SensorData
from functools import partial

class Client(Node):
    def __init__(self):
        super().__init__('client')
        self.sensor_publisher = self.create_publisher(SensorData, "sensor_data", 10)
        self.clientList = []
        self.times = [] 
        self.num_sensors = 2

        # Set up clients for sensors
        for i in range(2):
            client = self.create_client(GetSensorData, f'sensor_data{i}')
            self.clientList.append(client)
        self.create_timer(0.002, self.query_sensors) 

    def query_sensors(self):
        futures = []
        for i in range(self.num_sensors):
            while not self.clientList[0].wait_for_service(timeout_sec=1.0):
                self.get_logger().warn('service not available')
            rqst = GetSensorData.Request()
            rqst.sensor_index=i
            future = self.clientList[i].call_async(rqst)
            future.add_done_callback(partial(self.respond, i))
            futures.append(future)
    
    def respond(self, sensor_idx, future):
        try:
            response = future.result()
        except Exception as e:
            self.get_logger().error('Service call failed %r' % (e,))
            return
        msg = SensorData()
        msg.sensor_index = sensor_idx
        msg.data = response.data
        self.sensor_publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = Client()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()