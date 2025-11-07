# 💧 CSE406 - Lab 01: Real-time Water Level Monitoring using Arduino UNO

## 📘 Objective
To interface a water level sensor with Arduino Uno, read its analog data, convert it into a percentage, and visualize both the water level and its rate of change using the Arduino IDE Serial Plotter.

---

## ⚙️ Hardware & Software Used
- Arduino UNO  
- Water Level Sensor  
- Breadboard & Jumper Wires  
- USB Cable  
- Arduino IDE  

---

## 🧩 Circuit Connection
| Sensor Pin | Arduino UNO Pin |
|-------------|----------------|
| S (Signal)  | A0 |
| + (VCC)     | 5V |
| - (GND)     | GND |

---

## 💻 Code Features
✅ Reads analog sensor data  
✅ Maps raw data (0–1023) to water level percentage (0–100%)  
✅ Displays alerts based on thresholds: LOW, MEDIUM, HIGH  
✅ Calculates rate of change between readings  
✅ Visual output on Arduino Serial Plotter  

---

## 🔢 Threshold Alerts
| Water Level (%) | Alert Message |
|------------------|----------------|
| 0–25% | VERY LOW LEVEL |
| 25–75% | LOW LEVEL |
| 75–95% | MEDIUM LEVEL |
| 95–100% | HIGH LEVEL |

---

## 🧠 Learning Outcome
- Understand analog sensor data acquisition  
- Learn data mapping and percentage scaling  
- Implement conditional alerts  
- Visualize data dynamically using Serial Plotter  
- Apply IoT-style data monitoring logic  

---

👨‍💻 **Author:** Saifur Rahman  
🏫 *East West University*  
📅 *Spring 2025 | Course: CSE406 (Internet of Things)*  
👨‍🏫 *Instructor: Dr. Raihan Ul Islam*
