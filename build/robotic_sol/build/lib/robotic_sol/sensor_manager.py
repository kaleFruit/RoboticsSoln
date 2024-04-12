#!usr/env/bin python3

import socket
import sys
import rclpy
import numpy as np
import time
from rclpy.node import Node
from robotic_sol.srv import GetSensorData

class SensorManager(Node):
    def __init__(self):
        super().__init__('sensor_reader')
        self.timer = self.create_timer(1.0, self.timer_callback)
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        server_address = ('127.0.0.3', 10000)
        self.get_logger().info(f'Connecting to {server_address[0]} port {server_address[1]}')
        self.sock.connect(server_address)

        self.srv = self.create_service(GetSensorData, 'sensor_data', self.retrieve_sensor_data_callback)
        self.latest_data_ = []

    def timer_callback(self):
        number_of_samples = 10
        message = str(number_of_samples).encode()
        self.sock.sendall(message)
        byte_data = self.sock.recv(10000)
        data = np.frombuffer(byte_data, dtype=np.float64) 
        self.latest_data_ = data[-1]
        self.get_logger().info(f"{self.latest_data_}")

    def retrieve_sensor_data_callback(self, rqst, response):
        response.data = self.latest_data_
        return response

def main(args=None):
    rclpy.init(args=args)
    node = SensorManager()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()