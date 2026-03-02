# UART-Controlled Mode Machine
## Task-5: Industry-Standard Embedded Documentation

---

## 1. Title
**UART-Controlled Mode Machine using Multi-Driver Integration on VSDSquadron Mini**

---

## 2. Abstract
This project presents a UART-controlled embedded application developed on the VSDSquadron Mini RISC-V platform. The system implements a mode-based control mechanism where an external LED connected to GPIO PD4 changes behavior according to commands received through UART communication. The firmware integrates multiple reusable drivers including GPIO, UART, and Timer modules, demonstrating modular embedded software design and real-time hardware interaction. The project emphasizes clean API abstraction, layered architecture, and industry-standard documentation practices.

---

## 3. Target Hardware (VSDSquadron Mini)
- Development Board: **VSDSquadron Mini (CH32V00x RISC-V)**
- External Red LED connected to **PD4**
- 10kΩ resistor
- Breadboard and jumper wires
- USB interface for power and UART communication
- Development Environment: VS Code with PlatformIO

---

## 4. Supported Drivers
The application integrates the following firmware drivers:

- **GPIO Driver**
  - GPIO initialization and LED control
  - Digital output operations

- **UART Driver**
  - Serial communication interface
  - Command reception and status logging

- **Timer Driver**
  - Millisecond delay generation
  - Timing control for LED blinking modes

- **PWM Driver**
  - Not used in this implementation (reserved for future expansion)

---

## 5. Folder Structure
- README.md
- API_REFERENCE.md
- ARCHITECTURE.md
- APPLICATION_GUIDE.md
- DEMO_GUIDE.md
- CHANGELOG.md

---

## 6. Quick Start (Build + Flash)

1. Open project in **VS Code using PlatformIO**.
2. Connect VSDSquadron Mini board via USB.
3. Ensure firmware is placed in `src/main.c`.
4. Click **Build** to compile the project.
5. Click **Upload** to flash firmware.
6. Open Serial Monitor at **115200 baud**.
7. Send commands `0–3` to control LED modes.

---

## 7. One-Paragraph Summary
The UART-Controlled Mode Machine demonstrates multi-driver embedded system integration using GPIO, UART, and Timer modules on the VSDSquadron Mini platform. The application allows runtime switching between multiple LED operating modes through UART commands without resetting the system. By separating application logic from hardware drivers, the project achieves modularity, reusability, and maintainability consistent with industry-standard embedded firmware development practices.
