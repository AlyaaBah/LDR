# LDR
photoresistor with Arduino to control an LED.

This project explores the integration of a photoresistor (LDR) with an Arduino Uno to create a responsive lighting system. The LED is programmed to activate in low-light conditions and deactivate when ambient light exceeds a defined threshold. The system is simulated using TinkerCAD Circuits to validate functionality and behavior.

---

## 🔧 Components Used

- Arduino Uno  
- Breadboard  
- Photoresistor (LDR)  
- 10kΩ resistor (used in voltage divider configuration)  
- LED  
- 220Ω resistor (for current limiting)  
- Jumper wires

---

##  Circuit Description

The LDR is configured in a voltage divider circuit to provide analog input to the Arduino. As light intensity changes, the voltage at the analog pin (A0) varies accordingly. The Arduino reads this value and determines whether to activate or deactivate the LED based on a predefined threshold. This setup enables basic light-sensing automation.

---

##  Wiring Instructions

### LDR and Voltage Divider:
- Connect one terminal of the LDR to **5V**.  
- Connect the second terminal to **analog pin A0**.  
- Place a **10kΩ resistor** between the second terminal and **GND** to complete the voltage divider.

### LED:
- Connect the **anode (long leg)** of the LED to **digital pin 9**.  
- Connect the **cathode (short leg)** to **GND** through a **220Ω resistor**.

---

##  Project Notes

- The threshold for light detection can be calibrated by observing sensor values via the Serial Monitor.
- This project serves as a foundational example for environmental sensing and automated response systems.
- All testing and simulation were conducted using TinkerCAD Circuits for accuracy and ease of visualization.

---

##  Applications

This system can be extended to real-world applications such as automatic lighting, energy-saving systems, or smart home integration. It also serves as a practical introduction to analog sensor interfacing and conditional control logic in embedded systems.


