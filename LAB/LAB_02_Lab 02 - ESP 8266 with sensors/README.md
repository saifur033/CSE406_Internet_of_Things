# 🌡️ CSE406 - Lab 02: DHT11 & Water Level Sensor with ESP8266

## 📘 Objective
To interface **DHT11 (temperature & humidity)** and **Water Level Sensor** with **ESP8266 NodeMCU**,  
and display live readings via the Arduino Serial Monitor.

---

## ⚙️ Hardware & Software Used
- **ESP8266 NodeMCU**
- **DHT11 Sensor**
- **Water Level Sensor**
- **Breadboard & Jumper Wires**
- **Arduino IDE**
- **Adafruit DHT Library**

---

## 🧩 Circuit Connection
| Component | ESP8266 Pin | Description |
|------------|-------------|-------------|
| DHT11 Data | D4 (GPIO2)  | Digital input |
| Water Sensor Signal | A0 | Analog input |
| VCC | 3.3V | Power supply |
| GND | GND | Common ground |

---

## 💻 Code File
Arduino source code for this lab is available here:  
👉 **[Lab02_ESP8266_Sensors.ino](./Lab02_ESP8266_Sensors.ino)**  

Open this file in Arduino IDE, select **NodeMCU 1.0 (ESP8266)** board, and upload.

---

## 🧠 Learning Outcome
- Interfacing analog & digital sensors with ESP8266  
- Reading temperature, humidity, and water level data  
- Understanding calibration and mapping of sensor values  
- Serial communication and data visualization  

---

👨‍🏫 **Instructor:** Dr. Raihan Ul Islam  
👨‍💻 **Student:** Saifur Rahman  
🏫 *East West University, Fall 2025*
