# Changelog
## UART-Controlled Mode Machine — VSDSquadron Mini

---

## Purpose
This document records the version history and development progression of the UART-Controlled Mode Machine project. Maintaining a changelog reflects engineering discipline, traceability, and structured firmware evolution consistent with industry-standard software development practices.

Versioning follows **Semantic Versioning (SemVer)** principles:

- **MAJOR** version — significant architectural or functional changes
- **MINOR** version — feature additions or improvements
- **PATCH** version — fixes, refinements, or documentation updates

Format: `MAJOR.MINOR.PATCH`

---

## v1.0.0 – Initial Release
**Release Type:** Stable Functional Release  
**Status:** Demonstration Verified on Hardware

### Added
- Implemented reusable **GPIO driver** for digital pin control.
- Added **UART command interface** for runtime system interaction.
- Integrated **timer-based scheduling** using delay abstraction.
- Implemented UART-Controlled Mode Machine application logic.
- Added external LED control via GPIO **PD4**.
- Enabled runtime mode switching without system reset.
- Implemented UART status logging using `printf()`.

### Integrated Drivers
- GPIO Driver (initialization, set, clear, toggle, read)
- UART Communication Interface
- Timer Delay Driver

### Verification
- Firmware successfully flashed using PlatformIO.
- UART communication validated at **115200 baud**.
- LED behavior verified across all operating modes.
- Hardware testing completed using breadboard setup.

---

## v0.2.0 – Multi-Driver Integration (Task-4)
**Release Type:** Feature Integration

### Added
- Mode-based LED control system.
- Real-time UART command handling.
- Timer-controlled blinking patterns.
- External LED hardware interface.

### Improved
- Separation between application layer and driver layer.
- Runtime responsiveness without firmware restart.

---

## v0.1.0 – GPIO Driver Implementation (Task-3)
**Release Type:** Foundation Release

### Added
- Modular GPIO driver library.
- GPIO abstraction APIs.
- Button-controlled LED toggle demonstration.
- UART logging for validation evidence.

### Verified
- GPIO output functionality on onboard LED.
- Basic firmware structure using reusable APIs.

---

## Documentation Updates
- Added industry-standard documentation set (Task-5).
- API reference created using Doxygen-style format.
- Architecture and application guides prepared.
- Demo reproduction instructions documented.

---

## Future Enhancements (Planned)
- Non-blocking timer implementation.
- Optional PWM-based LED brightness control.
- Interrupt-driven UART command handling.
- Expansion to multi-peripheral applications.

---

## Summary
The project evolved from a basic GPIO driver implementation to a fully documented multi-driver embedded application. The changelog demonstrates structured development progression, version control discipline, and adherence to professional embedded engineering practices.
