# Vehicle Overweight Detection System

## Description

The **Vehicle Overweight Detection System** is an Arduino Uno based embedded system designed to detect and indicate vehicle overloading. The system uses a load cell and HX711 amplifier module to measure the applied weight. The Arduino processes the weight value and displays the result on an I2C LCD.

Different weight conditions are indicated using LEDs, and a buzzer provides an audible warning when the detected weight reaches the high/overweight condition.

The project is developed and tested using the **Wokwi simulator**.

## Features

- Vehicle/load weight measurement using a load cell.
- HX711 module for load-cell signal amplification.
- Real-time weight display on a 16x2 I2C LCD.
- Green LED indication for normal weight.
- Yellow LED indication for medium weight.
- Red LED indication for high/overweight condition.
- Buzzer alert for high weight.
- Arduino Uno based implementation.
- Wokwi-based circuit simulation.

## Components Used

- Arduino Uno
- Load Cell
- HX711 Load Cell Amplifier
- 16x2 I2C LCD
- Green LED
- Yellow LED
- Red LED
- Buzzer
- Connecting wires

## Working Principle

1. The load cell senses the applied vehicle/load weight.
2. The HX711 amplifies and converts the load-cell signal.
3. Arduino Uno reads the HX711 output.
4. The measured value is converted into a weight value using the calibration factor.
5. The weight is displayed on the I2C LCD.
6. Arduino compares the measured weight with predefined threshold values.
7. The appropriate LED is activated according to the weight condition.
8. The buzzer is activated when the weight reaches the high/overweight condition.
9. The process continuously repeats to provide real-time monitoring.

## Weight Indication

| Condition | Indication |
|---|---|
| Normal weight | Green LED |
| Medium weight | Yellow LED |
| High/Overweight | Red LED + Buzzer |

> The threshold values can be modified in the Arduino program according to the required application and load-cell calibration.

## Hardware Connections

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

## Software Requirements

- Arduino IDE
- C/C++ programming
- Wokwi Simulator

### Libraries

- HX711
- LiquidCrystal_I2C

## Project Structure

```text
VEHICLE-OVER-WEIGHT-DETECTION-SYSTEM/
│
├── sketch.ino
├── diagram.json
├── libraries.txt
└── wokwi-project.txt
```

## Project Output

### Normal Weight

### Medium Weight

### High/Overweight

## Applications

- Vehicle weight monitoring
- Overload detection systems
- Industrial weighing systems
- Transportation safety systems
- Smart parking and logistics systems
- Embedded-system learning and simulation

## Future Enhancements

- IoT-based remote weight monitoring.
- Cloud data logging.
- Mobile notification for overweight vehicles.
- GSM/Wi-Fi alert system.
- Automatic number plate recognition.
- Automatic barrier/gate control.
- Database-based vehicle weight history.

## Skills Demonstrated

- Embedded C/C++
- Arduino programming
- Sensor interfacing
- HX711 interfacing
- I2C communication
- LCD interfacing
- Digital input/output
- Embedded system design
- Wokwi simulation

## Author

**Sony Myadari**

## License

This project is created for educational and demonstration purposes.
