<div align="center">

# **ESP32 Bluetooth Data Link**

**A small ESP32 project for messing around with Bluetooth communication.**

[![ESP32](https://img.shields.io/badge/ESP32-Bluetooth-blue?style=for-the-badge&logo=espressif)](https://www.espressif.com/)
[![Arduino](https://img.shields.io/badge/Arduino-IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![C++](https://img.shields.io/badge/C%2B%2B-Code-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)

</div>

---

## ❓️ What is this?

Basically Im testing **Bluetooth communication**.

So the concept is there is an ESP32 and it connects over Bluetooth and sends:

```text
Hello World.!
```

every second. for testing bluetooth communication

---

## 💡 The idea

```text
┌─────────┐                      ┌─────────┐
│  ESP32  │ -- > Bluetooth -- >  │💻️ Device│
└─────────┘                      └─────────┘
```

The concept of this project is to make the esp32 send a message or data wirelessly thru bluetooth and other device that connected to the bluetooth recive the info and do something with it its an example of bluetooth communication.

---

## 🔵 Bluetooth

The ESP32 is given the name you can change this name to whatever you want:

```cpp
bluetooth.begin("Example bluetooth");          //<--- NAME HERE
```

So when looking for Bluetooth devices, it appears as:

> **Example bluetooth**

Then data is sent with: 

```cpp
bluetooth.println("Hello World.!");
```

<div align="center">

</div>
