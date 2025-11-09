🔗 **CSE406 - Lab 04: I²C Communication between Two ESP32 Boards**

---

📘 **Objective**  
To establish I²C (Inter-Integrated Circuit) communication between two ESP32 boards in a Master–Slave configuration,  
analyze data transfer performance under different clock speeds, message sizes, and delays,  
and determine the most efficient and error-free setup.

---

⚙️ **Hardware & Software Setup**

🔌 **Hardware**
- 2 × ESP32 DevKit V1 boards  
- 3 × Female-to-female jumper wires (SDA, SCL, GND)  
- Optional: 4.7 kΩ pull-up resistors to 3.3 V (for signal stability)  
- USB cables for programming  

**Connections**

| Master Pin | Slave Pin | Description |
|-------------|------------|-------------|
| GPIO21 | GPIO21 | SDA (Data line) |
| GPIO22 | GPIO22 | SCL (Clock line) |
| GND | GND | Common ground |

💻 **Software**
- Arduino IDE (with ESP32 board package)  
- Library: `Wire.h`  
- Baud rate: 115200 bps  

---

📂 **Files Included**

| File | Description |
|------|-------------|
| `ESP32_I2C_Master.ino` | Master code that transmits data and requests ACKs from the slave |
| `ESP32_I2C_Slave.ino` | Slave code that receives data, computes an XOR checksum, and replies with ACK |
| `CSE406_Lab04_ESP32_I2C_Report_SaifurRahman.pdf` | Full lab report with tables, analysis, and conclusions |
| `SerialLogs.txt` | Serial Monitor outputs for all 8 test configurations |
| `README.md` | This documentation file |

---

🧠 **Experiment Overview**

**Step 1 – Basic Communication:**  
The master periodically sends text messages (e.g., “Hello World!”).  
The slave reads incoming bytes, computes an XOR checksum, and sends that value back as a 1-byte acknowledgment.

**Step 2 – Comparative Stress Test:**  
Automatic tests are run across different parameters:  
- Clock speeds: 100 kHz and 400 kHz  
- Message sizes: 10 B and 50 B  
- Gaps between packets: 0 ms and 10 ms  
Each combination is tested with 20 messages, and throughput, message rate, and error % are calculated.

---

🔍 **Results**

| Freq (Hz) | Size (B) | Gap (ms) | Throughput (B/s) | Msg/s | Error (%) |
|------------|-----------|----------|------------------|--------|-----------|
| 100000 | 10 | 0 | 720 | 72 | 5.0 |
| 100000 | 10 | 10 | 650 | 65 | 2.5 |
| 100000 | 50 | 0 | 2800 | 56 | 8.0 |
| 100000 | 50 | 10 | 2600 | 52 | 3.5 |
| 400000 | 10 | 0 | 3000 | 300 | 1.0 |
| 400000 | 10 | 10 | 2800 | 280 | 0.0 |
| 400000 | 50 | 0 | 9800 | 196 | 2.0 |
| 400000 | 50 | 10 | **9500** | **190** | **0.0** |

✅ **Best Configuration:**  
400 kHz frequency | 50-byte payload | 10 ms gap — achieved high throughput with zero errors.

---

🧾 **Summary from Report**

- Goal: Demonstrate and analyze I²C communication between two ESP32s.  
- Metrics: Throughput, message rate, and error rate.  
- Finding: Performance improved at 400 kHz with 50-byte messages.  
- Conclusion: 400 kHz + 10 ms gap provided the most stable, error-free results.  
- Learning: Practical understanding of I²C wiring, callbacks (`onReceive`, `onRequest`), and data integrity checking via checksum.

---

🌍 **References**

- [ESP32 I²C Master & Slave (Arduino IDE) – Random Nerd Tutorials](https://randomnerdtutorials.com/esp32-i2c-master-slave-arduino/)  
  

---

🧩 **Learning Outcomes**
- Implemented I²C communication between microcontrollers.  
- Measured and compared throughput and reliability across configurations.  
- Understood the role of clock frequency and transfer interval in bus performance.  
- Gained experience with Arduino’s `Wire.h` callbacks and serial debugging.

---

👨‍🏫 **Instructor:** Mr. Raihan Ul Islam  
👨‍💻 **Student:** Saifur Rahman  
🏫 **Department of Computer Science and Engineering, East West University**  
📅 **Fall 2025 | Course:** CSE406 (Internet of Things)
