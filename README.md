# Smart Environmental Monitoring and Growth Regulation System

## Overview
This project focuses on monitoring and regulating environmental conditions for applications such as hydroponics, aeroponics, and smart agriculture.

The system measures temperature and humidity using a DHT11 sensor and helps maintain suitable conditions for plant growth. It also supports basic time-based adjustments depending on growth stages.

## Features
- Monitoring of temperature and humidity
- Data collection using DHT11 sensor
- Serial communication between Arduino and Python
- Real-time data visualization
- Can be extended for automated control

## Working
The DHT11 sensor collects temperature and humidity data through Arduino. The data is sent to a computer using serial communication.

A Python program reads this data and displays it for monitoring. The system can be extended to control environmental conditions based on predefined values.

## Applications
- Hydroponics systems
- Aeroponics setups
- Small greenhouse monitoring
- Basic smart agriculture systems

## Technologies Used
- Arduino Uno
- Python
- DHT11 sensor
- PySerial
- Matplotlib

## How to Run
1. Upload the Arduino code to the board
2. Connect Arduino to the computer
3. Install required libraries:
   pip install pyserial matplotlib
4. Run the Python script:
   python temp_monitor.py

## Future Scope
- Add automatic control using actuators
- Remote monitoring using IoT
- Improve accuracy with better sensors

## Author
Adithi M Kini
