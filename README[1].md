# Vehicle Overweight Detection System

## Project Overview

The **Vehicle Overweight Detection System** is an Arduino Uno based
embedded system designed to measure the weight of a vehicle using a load
cell and HX711 load sensor module.

The measured weight is displayed on a 16x2 I2C LCD. Based on predefined
weight limits, the system indicates whether the vehicle is in the
**NORMAL**, **MEDIUM**, or **HIGH** weight range. LEDs and a buzzer are
used to provide visual and audible indications.

## Components Used

-   Arduino Uno
-   HX711 Load Cell Amplifier
-   Load Cell / Weight Sensor
-   16x2 I2C LCD
-   Red LED
-   Yellow LED
-   Green LED
-   Buzzer
-   Connecting wires

## Working Principle

1.  The load cell senses the applied weight.
2.  The HX711 module amplifies and converts the load-cell signal into
    digital data.
3.  Arduino Uno reads the digital value from the HX711.
4.  The measured value is converted into weight.
5.  The weight is displayed on the LCD.
6.  Arduino compares the measured weight with predefined limits.
7.  LEDs and the buzzer indicate the corresponding weight condition.

## Weight Status Logic

  Weight Range     Status   Indication
  ---------------- -------- ------------------
  Below 15 kg      NORMAL   Green LED
  15 kg to 40 kg   MEDIUM   Yellow LED
  Above 41 kg      HIGH     Red LED + Buzzer

## Project Output

### 1. Normal Weight Output

When the measured weight is below the normal threshold, the LCD displays
**NORMAL** and the green LED is activated.

![Normal Weight Output](output_normal.jpg)

### 2. Medium Weight Output

When the measured weight is in the medium range, the LCD displays
**MEDIUM** and the yellow LED is activated.

![Medium Weight Output](output_medium.jpg)

### 3. High / Overweight Output

When the measured weight exceeds the specified limit, the LCD displays
**HIGH**. The red LED and buzzer are activated to indicate an overweight
condition.

![High Weight Output](output_high.jpg)

## Technologies Used

-   Embedded C / Arduino Programming
-   Arduino Uno
-   HX711 Load Cell Interface
-   I2C LCD Communication
-   Weight Measurement and Threshold Detection

## Applications

-   Vehicle weight monitoring
-   Overload detection
-   Industrial weighing systems
-   Transport and logistics monitoring
-   Automated weight-based alert systems

## Conclusion

The Vehicle Overweight Detection System provides a simple and effective
method for monitoring vehicle weight. By combining a load cell, HX711
module, Arduino Uno, LCD, LEDs, and buzzer, the system can detect
different weight conditions and provide immediate visual and audible
alerts.
