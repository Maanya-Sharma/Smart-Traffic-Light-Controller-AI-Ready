# Smart Traffic Light Controller (AI-Ready)

This project implements a smart traffic light controller using an
STM32 microcontroller. The system adapts traffic signals based on
vehicle density and provides a UART interface for future AI camera
integration.

---

## Features
- Vehicle detection using IR sensors
- Multi-direction traffic signal control
- Transistor-driven LED outputs
- UART communication for AI module
- Scalable and AI-ready design

---

## Hardware Used
- MCU: STM32F103C8T6 (Blue Pill)
- Sensors: IR vehicle detection modules
- Power Supply: 12V → LM2596 (5V) → AMS1117 (3.3V)
- Output: Red, Yellow, Green LEDs (via NPN transistors)
- Communication: UART (TX/RX)

---

## Pin Mapping (Summary)

### Traffic Lights
| Signal | MCU Pin |
|------|--------|
| North Red | PB0 |
| North Yellow | PB1 |
| North Green | PB5 |
| South Red | PB3 |
| East Red | PB4 |
| West Red | PA8 |

### Vehicle Sensors
| Lane | MCU Pin |
|----|--------|
| Lane 1 | PA0 |
| Lane 2 | PA1 |
| Lane 3 | PA2 |
| Lane 4 | PA3 |

---

## Applications
- Smart city traffic management
- Adaptive traffic control systems
- AI-based traffic optimization
- Emergency vehicle prioritization

---

## Future Improvements
- Camera-based vehicle detection
- Machine-learning-based signal timing
- Emergency vehicle priority control
- Cloud-based traffic data logging
