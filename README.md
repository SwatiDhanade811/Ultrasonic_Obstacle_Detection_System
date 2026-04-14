# Ultrasonic Obstacle Detection System

## 📌 Overview
This project demonstrates an ultrasonic-based obstacle detection system using Arduino UNO. It measures distance using an HC-SR04 sensor and triggers a buzzer and relay when an object is detected within a threshold distance.

## ⚙️ Components Used
- Arduino UNO  
- Ultrasonic Sensor (HC-SR04)  
- Buzzer  
- Relay Module  
- Breadboard & Jumper Wires  

## 🔌 Connections
- TRIG → Pin 9  
- ECHO → Pin 10  
- BUZZER → Pin 7  
- RELAY → Pin 8  
- VCC → 5V  
- GND → GND (Common ground required)

## 🚀 Working
- Ultrasonic sensor measures distance  
- If distance is less than 20 cm:
  - Buzzer turns ON  
  - Relay turns ON  
- Else:
  - Buzzer OFF  
  - Relay OFF  

## 📊 Output
- Distance displayed on Serial Monitor  
- Buzzer sound when object is near  
- Relay LED indicates activation  

## ⚠️ Challenges Faced
- Common ground and power connections issue  
- Resolved using breadboard power rails for proper distribution  

## 💡 Learning
- Sensor interfacing with Arduino  
- Distance measurement using ultrasonic sensor  
- Digital output control (buzzer & relay)  

## 📽️ Demo
https://youtu.be/oYIzE4qNUJk
 
