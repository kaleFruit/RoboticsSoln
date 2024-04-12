# Project Title

Robotics Sensor Solution

## Description

A client publishes data from 2 sensors on a topic. The client uses a service that reads data from the simulated sensors.

## Features
* Sensor Manager: Connects to sensors asychronously and uses a custom ROS 2 service.
* Client: Subscribes to sensor data and publishes it to a topic at 500Hz using a custom message to differentiate the sensors.
  
The asynchronous data handling helps reduce latency and maintains 500Hz publishing with recent data. 

## Dependencies
* ROS 2 Humble

## Authors

Katherine Robertson
katiecharobertson@gmail.com
