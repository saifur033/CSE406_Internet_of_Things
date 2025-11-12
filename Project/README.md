<p align="center">
  <img src="./East_West_University_Logo.png" alt="East West University Logo" width="300"/>
</p>

<h2 align="center">East West University</h2>
<h3 align="center">Department of Computer Science and Engineering</h3>

---

<h3 align="center">Course Title: Internet of Things</h3>
<h3 align="center">Course Code: CSE406</h3>

---

# 📘 IoT-Based Fingerprint Attendance System

## 👨‍🎓 Submitted By

| Name | Student ID |
|------|-------------|
| **Saifur Rahman** | 2021-3-60-033 |
| **Mumtahina Akter** | 2021-3-60-137 |
| **Md Tafsidul Islam** | 2022-1-60-271 |
| **Farhana Hoque Nishi** | 2022-1-60-296 |

---

## 🎓 Submitted To
**Dr. Raihan Ul Islam (DRUI)**  
*Associate Professor*  
Department of Computer Science and Engineering  
**East West University**

---

## 🔹 Project Overview
This project focuses on developing an **IoT-based fingerprint attendance system** using the **ESP8266 NodeMCU** and **R307 fingerprint sensor**.  
The system allows users to mark attendance by scanning their fingerprints. Once verified, the ESP8266 sends attendance data (User ID, Date, and Time) to **Google Sheets** through the internet.  

An **OLED display** shows messages like “Attendance Recorded” or “Access Denied,” and a **buzzer** gives short audio feedback.  
This system makes attendance recording **faster, paperless, and error-free** for schools, offices, and organizations.

---

## ⚙️ Hardware Components
| Component | Function |
|------------|-----------|
| **ESP8266 NodeMCU** | Main controller and Wi-Fi connectivity |
| **R307 Fingerprint Sensor** | Captures and verifies fingerprints |
| **OLED Display (0.96")** | Displays attendance status |
| **BC547 Transistor** | Drives the buzzer |
| **Buzzer** | Audio feedback for success/failure |
| **Resistors, Wires, Veroboard** | Circuit connections and safety |

---

## 🔄 Working Principle
1. The user places their finger on the **R307 fingerprint sensor**.  
2. The fingerprint data is verified by the **ESP8266 NodeMCU**.  
3. If a match is found → Attendance data (User ID, Date, Time) is uploaded to **Google Sheets**.  
   - OLED shows: “Attendance Recorded”  
   - Buzzer: 1 short beep  
4. If no match is found →  
   - OLED shows: “Access Denied”  
   - Buzzer: 2 quick beeps  
5. Attendance data is stored online in real time.

---

## ☁️ IoT and Cloud Integration
- **Google Sheets** — Cloud-based attendance record storage  
- **Google Apps Script** — Connects ESP8266 to Google Sheets for data upload  
- **Wi-Fi** — Enables real-time internet communication


---

## 📄 Project Proposal (PDF)
📘 [Click to View Proposal](./IoT_Fingerprint_Attendance_Project_Proposal.pdf)

---

## 🏷️ Keywords
`IoT` `ESP8266` `R307 Sensor` `Google Sheets` `Fingerprint Attendance` `IoT Project` `East West University` `Dr. Raihan Ul Islam`
