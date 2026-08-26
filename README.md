# 🚛 Vehicle Overweight Detection System

## 📌 Project Overview

Vehicle overloading is a major safety concern in transportation and logistics. Excessive vehicle weight can affect braking, handling, road safety, and vehicle performance. Manual weight checking can be time-consuming and may not provide immediate indication of an overload condition.

This project presents a **Vehicle Overweight Detection System**, developed using an **Arduino Uno**. The system continuously measures the applied vehicle/load weight using a **Load Cell** and **HX711 Load Cell Amplifier**. The measured weight is processed by the Arduino and displayed on a **16×2 I2C LCD**.

The system classifies the detected weight into different conditions. A **Green LED** indicates normal weight, a **Yellow LED** indicates medium weight, and a **Red LED with Buzzer** indicates a high/overweight condition. The project is developed and tested using the **Wokwi simulator**.

---

## 🎯 Objectives

| Objective | Description |
|------------|-------------|
| ⚖️ Weight Measurement | Measure vehicle/load weight using a load cell |
| 🔌 Signal Amplification | Use the HX711 module to amplify and convert the load-cell signal |
| 🖥️ LCD Display | Display the measured weight on a 16×2 I2C LCD |
| 🟢 Normal Indication | Indicate normal weight using a Green LED |
| 🟡 Medium Indication | Indicate medium weight using a Yellow LED |
| 🔴 Overweight Detection | Indicate high/overweight condition using a Red LED |
| 🚨 Alert System | Activate the buzzer during the high/overweight condition |
| 🔄 Real-Time Monitoring | Continuously monitor the applied weight |

---

## 🧰 Hardware Components

| Component | Quantity | Purpose |
|-----------|:--------:|---------|
| Arduino Uno | 1 | Central controller of the system |
| Load Cell | 1 | Measures the applied weight |
| HX711 Load Cell Amplifier | 1 | Amplifies and converts the load-cell signal |
| 16×2 I2C LCD | 1 | Displays the measured weight |
| Green LED | 1 | Indicates normal weight |
| Yellow LED | 1 | Indicates medium weight |
| Red LED | 1 | Indicates high/overweight condition |
| Buzzer | 1 | Provides an audible overweight alert |
| Connecting Wires | As required | Circuit connections |

---

## 💻 Software Requirements

| Software | Purpose |
|-----------|---------|
| Arduino IDE | Arduino program development and uploading |
| C/C++ | Firmware development |
| Wokwi Simulator | Circuit simulation and testing |

### Libraries

- HX711
- LiquidCrystal_I2C

---

## 🏗️ System Architecture

<p align="center">
  <img src="./diagram.png" alt="System Architecture" width="900">
</p>

The **Arduino Uno** acts as the central controller. The **Load Cell** senses the applied weight and sends a small electrical signal to the **HX711 module**.

The HX711 amplifies and converts the load-cell signal into digital data. The Arduino reads this data, applies the required calibration factor, and calculates the weight.

The calculated weight is displayed on the **16×2 I2C LCD**. The Arduino then compares the measured weight with predefined threshold values and activates the appropriate LED and buzzer according to the weight condition.

---

## 🔄 Working Principle

<p align="center">
  <img src="./working-principle.png" alt="Working Principle" width="1000">
</p>

1. The **Load Cell** senses the applied vehicle/load weight.
2. The load cell generates a small electrical signal according to the applied load.
3. The **HX711** amplifies and converts the signal into digital data.
4. The **Arduino Uno** reads the HX711 output.
5. The measured value is converted into a weight value using the calibration factor.
6. The weight is displayed on the **16×2 I2C LCD**.
7. Arduino compares the measured weight with predefined threshold values.
8. The appropriate LED is activated according to the detected weight.
9. The buzzer is activated when the weight reaches the high/overweight condition.
10. The process continuously repeats to provide real-time monitoring.

---

## ⭐ Key Features

| Feature | Description |
|---------|-------------|
| ⚖️ Real-Time Weight Measurement | Continuously measures applied vehicle/load weight |
| 🔌 HX711 Interfacing | Interfaces the load cell through the HX711 amplifier |
| 🖥️ LCD Display | Displays the measured weight locally |
| 🟢 Normal Weight Indication | Green LED indicates normal weight |
| 🟡 Medium Weight Indication | Yellow LED indicates medium weight |
| 🔴 Overweight Indication | Red LED indicates high/overweight condition |
| 🚨 Buzzer Alert | Provides an audible alert for high/overweight conditions |
| 🛠️ Arduino Based | Implemented using Arduino Uno |
| 🧪 Wokwi Simulation | Circuit can be developed and tested using Wokwi |

---

## 🔌 Hardware Connections

### HX711 to Arduino Uno

| HX711 | Arduino Uno |
|---|---|
| DT | D2 |
| SCK | D3 |
| VCC | 5V |
| GND | GND |

### LEDs

| Component | Arduino Pin |
|---|---|
| Red LED | D4 |
| Yellow LED | D5 |
| Green LED | D6 |

### Buzzer

| Buzzer | Arduino Uno |
|---|---|
| Positive | D7 |
| Negative | GND |

### I2C LCD

| LCD | Arduino Uno |
|---|---|
| SDA | A4 |
| SCL | A5 |
| VCC | 5V |
| GND | GND |

---

## ⚖️ Weight Indication

| Condition | Indication |
|---|---|
| Normal weight | 🟢 Green LED |
| Medium weight | 🟡 Yellow LED |
| High/Overweight | 🔴 Red LED + 🚨 Buzzer |

> The threshold values can be modified in the Arduino program according to the required application and load-cell calibration.

---

## 🚀 Advantages

| Advantage | Description |
|-----------|-------------|
| ⚡ Real-Time Detection | Continuously monitors the applied weight |
| 🔔 Immediate Alert | Provides an audible warning during an overweight condition |
| 🖥️ Local Display | Shows the measured weight on the LCD |
| 🎯 Simple Operation | Automatically classifies the weight condition |
| 🛠️ Low-Cost Solution | Uses commonly available embedded hardware |
| 🧪 Easy Testing | Can be developed and tested using Wokwi |
| 📈 Expandable | Additional monitoring and communication features can be added |

---

## 🏭 Applications

| Application | Description |
|-------------|-------------|
| 🚛 Vehicle Weight Monitoring | Monitor the weight of vehicles |
| ⚠️ Overload Detection | Detect overloaded vehicles and loads |
| 🏭 Industrial Weighing | Monitor loads in industrial environments |
| 🛣️ Transportation Safety | Support safer transportation through overload detection |
| 📦 Logistics | Monitor loads during transportation and logistics operations |
| 🧪 Embedded Learning | Demonstrate sensor interfacing and embedded-system concepts |

---

## 📂 Project Folder Structure

```text
VEHICLE-OVER-WEIGHT-DETECTION-SYSTEM/
│
├── README.md
├── sketch.ino
├── diagram.json
├── libraries.txt
├── wokwi-project.txt
└── images/
    ├── normal-weight.png
    ├── medium-weight.png
    └── high-overweight.png
```

---

## 📸 Project Output

### 🟢 Normal Weight

<p align="center">
  <img src="./images/normal-weight.png" alt="Normal Weight Output" width="700">
</p>



The system displays the measured weight and indicates the normal condition using the **Green LED**.

### 🟡 Medium Weight

<p align="center">
  <img src="./images/medium-weight.png" alt="Medium Weight Output" width="700">
</p>

When the measured weight falls within the medium range, the **Yellow LED** is activated.

### 🔴 High/Overweight

<p align="center">
  <img src="./images/high-overweight.png" alt="High/Overweight Output" width="700">
</p>

When the measured weight reaches the high/overweight threshold, the **Red LED** and **Buzzer** are activated to provide an immediate warning.

---

## 🔮 Future Enhancements

- IoT-based remote weight monitoring.
- Cloud data logging.
- Mobile notification for overweight vehicles.
- GSM/Wi-Fi alert system.
- Automatic number plate recognition.
- Automatic barrier/gate control.
- Database-based vehicle weight history.
- Integration with a web dashboard for remote monitoring.

---

## 🧠 Skills Demonstrated

- Embedded C/C++
- Arduino programming
- Sensor interfacing
- Load cell interfacing
- HX711 interfacing
- I2C communication
- LCD interfacing
- Digital input/output
- Embedded system design
- Wokwi simulation

---

## 👩‍💻 Author

**Sony Myadari**

## 📜 License

This project is created for educational and demonstration purposes.
