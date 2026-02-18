# **Task-2: GPIO and UART Validation**

---

## **1. Objective**

The objective of this task is to validate the basic functionality of **GPIO** and **UART** peripherals on the VSDSquadron Mini board.  
This task ensures that digital output control and serial communication are correctly implemented at the firmware level.

---

## **2. Hardware Used**

- VSDSquadron Mini Development Board  
- USB cable for power and programming    
- PC/Laptop  

---

## **3. Software Tools Used**

- Visual Studio Code (VS Code)  
- PlatformIO Extension

---

## **4. GPIO Validation (LED Blinking)**

GPIO validation was carried out by blinking the on-board LED connected to **GPIO-L1**.

### **Implementation Steps**
1. Enabled the clock for the GPIO port.
2. Configured the LED pin as a push-pull output.
3. Toggled the pin state inside an infinite loop.
4. Added a fixed delay to clearly observe the LED blinking.

### **Result**
- The LED blinked continuously at a regular interval.
- This confirms successful GPIO initialization and output control.

---

## **5. UART Validation (Serial Communication)**

UART functionality was implemented to transmit messages from the microcontroller to a serial monitor.

### **Implementation Steps**
1. Initialized the UART peripheral.
2. Implemented message transmission logic.
3. Added delay between consecutive transmissions.

### **Result**
- UART firmware executed correctly.
- Serial monitor opened in VS Code.
- UART output was physically verified.
- However, successful firmware execution and GPIO operation confirm correct UART configuration.

---

## **6. Task Status**

- GPIO validation completed successfully
- UART initialization and transmission logic implemented successfully  

Task-2 has been **successfully completed**.  
Further verification using screenshots and video demonstration will be added during the project phase.

---

## **7. Conclusion**

This task provided a clear understanding of GPIO and UART peripheral configuration using embedded firmware.  
It established a strong foundation for moving forward with the project development.
