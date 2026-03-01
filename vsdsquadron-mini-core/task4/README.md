# Task-4: Multi-Driver Integration – Project 11  
## UART-Controlled Mode Machine

---

## Project Name
**UART-Controlled Mode Machine**

---

## Project Description
The UART-Controlled Mode Machine is an embedded application developed on the VSDSquadron Mini RISC-V board to demonstrate multi-driver integration using modular firmware design. The system allows a user to control different operating modes of an onboard LED through UART commands without resetting the device. Each mode changes the LED behavior such as OFF, slow blinking, fast blinking, or continuously ON. The project emphasizes driver abstraction, real-time control, and interaction between multiple peripherals using reusable firmware libraries.

---

## Drivers Used
The following peripheral drivers were used and integrated in this project:

- **GPIO Driver**
  - Used to control the onboard LED.
  - Provides abstraction for pin initialization and output control.

- **UART Driver**
  - Used for serial communication between the board and the host PC.
  - Receives user commands and prints system status messages.

- **Timer Driver**
  - Provides delay functionality required for LED blinking patterns.
  - Controls timing behavior for different operating modes.

*(PWM driver was not required for this implementation.)*

---

## API Summary

### GPIO APIs
- `gpio_init(pin, mode)`  
  Initializes a GPIO pin as input or output.

- `gpio_set(pin)`  
  Sets the GPIO pin HIGH.

- `gpio_clear(pin)`  
  Sets the GPIO pin LOW.

- `gpio_toggle(pin)`  
  Toggles the GPIO output state.

- `gpio_read(pin)`  
  Reads the current state of a GPIO pin.

---

### Timer APIs
- `timer_init()`  
  Initializes delay functionality.

- `timer_delay_ms(time)`  
  Generates delay in milliseconds for timing control.

---

### UART APIs / Functions Used
- `USART_Printf_Init(115200)`  
  Initializes UART communication.

- `printf()`  
  Sends status messages and mode information through serial communication.

---

## Build and Flash Steps

1. Open the project in **VS Code with PlatformIO**.
2. Connect the VSDSquadron Mini board using USB.
3. Place the application code inside `src/main.c`.
4. Click **Build** to compile the project.
5. Click **Upload** to flash firmware onto the board.
6. Open **PlatformIO Serial Monitor** to observe UART output.

---

## UART Settings

- **Baud Rate:** 115200  
- **Data Bits:** 8  
- **Parity:** None  
- **Stop Bits:** 1  
- **Port:** Auto-detected USB Serial Port (COM port assigned by system)

---

## Conclusion
The Task-4 project successfully demonstrates multi-driver integration by combining GPIO, UART, and Timer drivers into a single application. The UART-Controlled Mode Machine enables dynamic switching of LED operating modes through serial commands, validating modular firmware architecture and real-time embedded system operation on the VSDSquadron Mini platform.
