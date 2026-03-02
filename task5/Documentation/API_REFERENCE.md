# API Reference
## UART-Controlled Mode Machine – Driver API Documentation

---

## Overview
This document describes the public Application Programming Interfaces (APIs) used in the UART-Controlled Mode Machine project implemented on the VSDSquadron Mini platform. The APIs abstract direct hardware register interaction and provide reusable interfaces for GPIO control, UART communication, and timer-based delay operations. The design follows industry-standard embedded firmware documentation practices to ensure maintainability, portability, and clarity.

---

## GPIO Driver APIs

## gpio_init(int pin, int mode)
- Description: Initializes a GPIO pin as input or output before use.

- Parameters:
  - pin : GPIO pin number (example GPIO_Pin_4)
  - mode : GPIO_OUTPUT or GPIO_INPUT
  - Example:
  gpio_init(GPIO_Pin_4, GPIO_OUTPUT);

## gpio_set(int pin)
- Description: Sets the GPIO pin HIGH. Used to turn ON the LED.

Parameters:
- pin : GPIO pin number
- Example:
gpio_set(GPIO_Pin_4);

## gpio_clear(int pin)
- Description: Sets the GPIO pin LOW. Used to turn OFF the LED.

Parameters:
- pin : GPIO pin number
- Example:
gpio_clear(GPIO_Pin_4);

## gpio_toggle(int pin)
- Description: Toggles the GPIO output state. Used for LED blinking.

Parameters:
- pin : GPIO pin number
- Example:
gpio_toggle(GPIO_Pin_4);

## gpio_read(int pin)
- Description: Reads the digital state of a GPIO input pin.

Parameters:
  - pin : GPIO pin number
-Return:
  - 1 = HIGH
  - 0 = LOW
-Example:
  int state = gpio_read(GPIO_Pin_0);

## timer_init():

- Description: Initializes the timer delay system.
  
  - Example:
    timer_init();


## timer_delay_ms(uint32_t ms):

Description: Generates a blocking delay in milliseconds.
Parameters:
  - ms : delay duration

-Example:
  timer_delay_ms(1000);


## USART_Printf_Init(uint32_t baudrate):

- Description: Initializes UART communication for serial output.

- Parameters:
  - baudrate : communication speed (115200 recommended)

- Example:
  USART_Printf_Init(115200);

printf()
- Description: Sends formatted output through UART for debugging and status messages.

- Example:
  printf("Mode = %d\r\n", mode);

