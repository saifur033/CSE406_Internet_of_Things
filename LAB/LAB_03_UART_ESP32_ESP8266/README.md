# 🔗 CSE406 - Lab 03: UART Communication between ESP32 and ESP8266

## 📘 Objective
To establish UART (Universal Asynchronous Receiver/Transmitter) communication between **ESP32** and **ESP8266** boards,  
analyze their performance under different baud rates, message sizes, and intervals,  
and determine which platform performs more efficiently.

---

## ⚙️ Hardware & Software Setup
### 🔌 Hardware
- ESP32 DevKit V1  
- ESP8266 NodeMCU  
- Female-to-Female Jumper Wires  
- USB Cables  

**Connections:**
| ESP32 Pin | ESP8266 Pin | Description |
|------------|-------------|--------------|
| TX (GPIO19) | RX (GPIO3) | Data Transmission |
| RX (GPIO21) | TX (GPIO1) | Data Reception |
| GND | GND | Common Ground |

---

### 💻 Software
- Arduino IDE  
- ESP32 & ESP8266 Board Packages  
- Serial Monitor (115200 baud)  

---

## 📂 Files Included

| File | Description |
|------|--------------|
| [CSE406_UART_Sender5.1.ino](./CSE406_UART_Sender5.1.ino) | ESP32 basic sender code |
| [CSE406_UART_Sender5.2.ino](./CSE406_UART_Sender5.2.ino) | ESP32 enhanced sender |
| [CSE406_UART_Sender5.3.ino](./CSE406_UART_Sender5.3.ino) | ESP32 high-speed sender |
| [lab_3_work5_1_receive.ino](./lab_3_work5_1_receive.ino) | ESP8266 basic receiver |
| [lab_3_work5_2_receive.ino](./lab_3_work5_2_receive.ino) | ESP8266 optimized receiver |
| [lab_3_work5_3_receive.ino](./lab_3_work5_3_receive.ino) | ESP8266 high-speed receiver |
| [CSE_406_Lab_3_Report.pdf](./CSE_406_Lab_3_Report.pdf) | Full report with analysis and results |

---

## 🧠 Summary from Report
- **Goal:** Compare ESP32 vs ESP8266 UART communication efficiency.  
- **Baud Rates Tested:** 9600, 38400, 115200  
- **Message Sizes:** 10, 50, 100 bytes  
- **Intervals:** 0 ms, 10 ms, 100 ms  

### 🔍 Results
| Baud | Msg Size | Interval | ESP32 Throughput (B/s) | ESP8266 Throughput (B/s) | Winner |
|------|-----------|-----------|------------------------|---------------------------|--------|
| 9600 | 10 | 100 | 940 | 900 | ESP32 |
| 38400 | 50 | 10 | 4650 | 4100 | ESP32 |
| 115200 | 100 | 0 | 11200 | 8500 | ESP32 |

**Conclusion:**  
ESP32 consistently outperforms ESP8266 due to its **hardware UART support** and better buffering.  
ESP8266’s software UART struggled above 38400 baud.  

---

## 🌍 References
- **ESP32 UART Communication Tutorial:**  
  [https://randomnerdtutorials.com/esp32-uart-communication-serial-arduino/](https://randomnerdtutorials.com/esp32-uart-communication-serial-arduino/)
- **ESP8266 Arduino Setup:**  
  [https://lastminuteengineers.com/esp8266-nodemcu-arduino-tutorial/](https://lastminuteengineers.com/esp8266-nodemcu-arduino-tutorial/)
- **ESP8266 Pin Reference:**  
  [https://lastminuteengineers.com/esp8266-pinout-reference/](https://lastminuteengineers.com/esp8266-pinout-reference/)

---

## 🧩 Learning Outcome
- Implement UART serial communication between microcontrollers  
- Evaluate data throughput and reliability  
- Understand hardware vs. software UART performance  
- Optimize baud rates and message timing for IoT systems  

---

👨‍🏫 **Instructor:** Dr. Raihan Ul Islam  
👨‍💻 **Student:** Saifur Rahman  
🏫 *Department of Computer Science and Engineering, East West University*  
📅 *Fall 2025 | Course: CSE406 (Internet of Things)*
