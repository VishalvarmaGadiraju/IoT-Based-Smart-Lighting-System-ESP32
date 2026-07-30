# IoT-Based Smart Lighting System using ESP32

## 📖 Overview

The IoT-Based Smart Lighting System is an embedded systems project that demonstrates wireless control of an AC light bulb using an ESP32 and a relay module. The ESP32 acts as a Wi-Fi Access Point and hosts a web server that provides a simple user interface for switching the connected light ON and OFF from any smartphone or laptop connected to its network.

This project introduces the fundamentals of IoT, relay interfacing, web server development, GPIO control, and wireless home automation using the ESP32.

---

## ✨ Features

- ESP32 operates as a Wi-Fi Access Point
- Built-in Web Server
- Mobile-friendly web interface
- Wireless light ON/OFF control
- Relay-based AC load switching
- Simple HTML & CSS interface
- No internet connection required
- Beginner-friendly IoT project

---

## 🛠 Components Used

- ESP32 Development Board
- 5V Relay Module
- AC LED Bulb
- Bulb Holder
- Power Cable
- Breadboard
- Jumper Wires
- USB Cable

---

## 💻 Software Used

- Arduino IDE
- ESP32 Board Package
- WiFi.h
- WebServer.h

---

## 🔌 Circuit Connections

### ESP32 → Relay Module

| ESP32 | Relay |
|--------|--------|
| VIN | VCC |
| GND | GND |
| GPIO4 | IN1 |

### Relay → AC Bulb

- AC Live → COM
- NO → Bulb Live
- AC Neutral → Bulb Neutral

> **⚠️ Warning:** This project involves 230V AC mains electricity. Always disconnect power before making or modifying connections. If you are inexperienced with mains wiring, seek guidance from someone experienced. Never touch exposed live conductors.

---

## ⚙️ Working Principle

1. ESP32 creates its own Wi-Fi Access Point.
2. A smartphone or laptop connects to the ESP32 Wi-Fi network.
3. Opening the ESP32 IP address displays a web page.
4. The user presses the ON or OFF button.
5. The ESP32 changes the GPIO output.
6. The relay switches the connected AC bulb accordingly.

---

## 📱 Project Output

- Wireless ON/OFF control of an AC light bulb
- Relay switching through a web interface
- Responsive HTML webpage

---

## 🚀 Future Improvements

- Multiple light control
- Light status indicator
- Password-protected webpage
- Automatic light scheduling
- Mobile application integration
- MQTT support
- Cloud connectivity
- Voice assistant integration

---

## 📚 Skills Learned

- ESP32 Programming
- Embedded Systems
- GPIO Programming
- Relay Interfacing
- Wi-Fi Networking
- HTTP Web Server
- HTML & CSS
- Internet of Things (IoT)
- Home Automation

---

## 📄 License

This project is licensed under the MIT License.

## Author
**Vishal Varma**

ELectronics and Communication Engineering(ECE)
Embedded systems and IOT
