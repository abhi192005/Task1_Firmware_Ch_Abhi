# Task-3: Peripheral Driver Library Development and Application Demo

## Objective
The objective of Task-3 is to move from basic board bring-up to designing a reusable firmware library and demonstrating its usage through a working application on the VSDSquadron Mini RISC-V board.

This task focuses on modular firmware design, clean API abstraction, and hardware validation using UART logs.

---

## Task Overview
In this task, a custom **GPIO driver library** was developed and used by an application to control hardware peripherals. The goal was to separate low-level hardware access from application logic and verify correct functionality on real hardware.

---

## GPIO Driver Library
A reusable GPIO library was implemented with clearly defined APIs.  
The library abstracts direct register access and provides simple functions for GPIO control.

### Implemented APIs
- `gpio_init(pin, mode)` – Initialize a GPIO pin as input or output  
- `gpio_set(pin)` – Set GPIO pin to HIGH  
- `gpio_clear(pin)` – Set GPIO pin to LOW  
- `gpio_read(pin)` – Read the current state of a GPIO pin  

The library is implemented in `gpio.c` and `gpio.h`.

---

## Application Demo (Option-1)
The application demonstrates **Button Press Toggles an LED** using the GPIO library.

### Application Behavior
- A GPIO pin is configured as an input to read a button (simulated using a jumper wire).
- Another GPIO pin is configured as an output to control an onboard LED.
- On each valid button press, the LED toggles its state.
- UART messages are printed to indicate LED state changes.

---

## Hardware Setup
- Board: VSDSquadron Mini RISC-V
- LED: Onboard LED (PD6)
- Button: Simulated using a jumper wire (PD0 connected to GND)
- UART: USB Serial Interface
- Baud Rate: 115200

---

## Validation
The application was tested on real hardware.  
LED toggling was visually verified, and UART logs confirmed correct GPIO state changes.  
A video recording of the working demo is provided as evidence.

---

## Conclusion
Task-3 was successfully completed by implementing a reusable GPIO driver library and demonstrating its usage through a button-controlled LED toggle application. The task validates proper GPIO abstraction, modular firmware design, and hardware-level verification using UART output on the VSDSquadron Mini board.
