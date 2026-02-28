# Task-4 Evidence  
## Multi-Driver Integration – Project 11 (UART-Controlled Mode Machine)

---

## Overview
This document provides execution evidence for **Task-4: Multi-Driver Integration**, implemented as the **UART-Controlled Mode Machine** on the VSDSquadron Mini RISC-V board. The project demonstrates integration of multiple peripheral drivers and validates correct system behavior using UART communication and LED operation.

---

## Application Demonstration
The application allows the user to select different operating modes through UART commands. Each mode changes the behavior of the onboard LED without resetting the system.

### Implemented Modes
| Mode | LED Behavior |
|------|--------------|
| 0 | LED OFF |
| 1 | Slow Blink (1 second delay) |
| 2 | Fast Blink (200 ms delay) |
| 3 | LED ON |

Mode selection is performed by sending numeric commands through the serial terminal.

---

## UART Output Evidence
The following UART output was observed during execution at **115200 baud rate**:
![LED Blinking](task4.jpg)
and video 
