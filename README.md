# 🚧 Automatic Gate System using Arduino

An Arduino-based smart gate automation project that uses an ultrasonic sensor to detect approaching vehicles and automatically opens and closes a gate using a servo motor.

---

## 📌 Project Overview

This project was developed for the **Project Expo** conducted during the **Standards Carnival Celebration**, organized by the **Bureau of Indian Standards (BIS)** in association with **PSNA College of Engineering and Technology**.

The objective was to demonstrate how embedded systems and automation can improve safety, convenience, and efficiency in residential, industrial, and institutional environments.

---

## ✨ Features

- Automatic vehicle detection
- Servo-controlled gate operation
- Contactless access demonstration
- Real-time response
- Low-cost automation prototype
- Scalable for smart infrastructure

---

## 🛠️ Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- SG90 Servo Motor
- Breadboard
- Jumper Wires
- Toy Car (for demonstration)
- Cardboard Gate Model
- USB Cable

---

## 🔌 Circuit Connections

### Ultrasonic Sensor

| HC-SR04 Pin | Arduino Uno |
|-------------|-------------|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### Servo Motor

| Servo Pin | Arduino Uno |
|-----------|-------------|
| VCC (Red) | 5V |
| GND (Brown/Black) | GND |
| Signal (Orange) | D6 (PWM) |

---

## ⚙️ Working Principle

1. The ultrasonic sensor continuously measures the distance to detect an approaching vehicle.
2. When the vehicle comes within the predefined range, the Arduino processes the sensor data.
3. The Arduino commands the servo motor to rotate and open the gate.
4. After the vehicle passes or moves away, the servo returns to its initial position, closing the gate.

---

## 📚 Indian Standards Referenced

This project was presented by highlighting the importance of the following BIS standards:

- IS 302 – Safety of household and similar electrical appliances
- IS 12075 – Electromechanical control systems
- IS 62368 – Safety requirements for Audio/Video, Information and Communication Technology equipment
- IS 13252 – Safety requirements for Information Technology equipment
- IS 900 – Quality and reliability requirements

These standards emphasize safety, performance, and reliability in engineering design.

---

## 🚀 Future Enhancements

- RFID-based authentication for authorized access
- IoT integration for remote monitoring and control
- Mobile application for gate operation
- Cloud-based access logs
- Automatic visitor management
- Solar-powered gate system

---

## 📂 Project Structure

```
Automatic-Gate-System/
│
├── README.md
├── Automatic_Gate.ino
├── images/
│   ├── prototype.jpg
│   ├── working_model.jpg
│   └── expo.jpg
└── circuit/
    └── circuit_diagram.png
```

---

## 📸 Project Images

Upload your project photographs inside the `images` folder.

---

## 🎯 Learning Outcomes

- Arduino programming
- Ultrasonic sensor interfacing
- Servo motor control
- Embedded system design
- Prototype development
- Technical presentation skills
- Understanding BIS standards and their role in engineering

---

## 🏛️ Project Expo

Presented at the **Bureau of Indian Standards (BIS) Standards Carnival** hosted by **PSNA College of Engineering and Technology, Dindigul**.

---


## ⭐ If you found this project interesting, consider giving it a Star!
