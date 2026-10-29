# soil_moisture_sensor_monitoring_device
Arduino UNO R4 Minima project to use the YL-69 Soil moisture sensor and LCD 16x2 I2C Display to monitor soil moisture and help to plant water automatically

## 1. Project description
The Smart Plant Doctor is an electronic system that checks whether the soil around a plant is dry or wet. It uses a soil moisture sensor to measure changes in soil moisture, an Arduino Uno to process the readings, and an LCD screen to display the estimated moisture percentage and soil condition.

## 2. What problem does it solve?
Plants need the right amount of water to grow. Sometimes we water them too much, while at other times we forget to water them.

This project helps solve three problems:
- Water wastage: Helps identify when soil is already moist.
- Plant care: Helps us recognise when soil is becoming dry.
- Awareness: Demonstrates how technology can support water conservation and smarter gardening.

## 3. Components used
  - Arduino Uno R4 Minima
    The brain of the project. It processes the sensor readings.
  - YL-69 soil moisture sensor
    Detects changes in the moisture of the soil.
  - 16×2 I2C LCD
    Displays the estimated moisture percentage and soil status.
  - 3 Led (red, Blue, Green) 
    used as indicator to indicate the correct time to watering the plant
  - 3 x 220 ohm resistor
  - Jumper wires and USB cable

Connect the components and supply power to the Arduino.

## 4. How does it work?
  Step 1: Sense
      The two-pronged sensor is inserted into the soil and detects changes in electrical conductivity.
  Step 2: Process
      Arduino reads the sensor value and converts it into an estimated moisture percentage.
  Step 3: Display
      The LCD shows the moisture percentage and a status such as DRY, MODERATE or WET.

## 5. Live demonstration 
  Demo A — Dry soil
    Insert the sensor into dry soil. Show the LCD reading and explain that the plant may need watering.
  Demo B — Add water
    Add a small amount of water to the soil, wait briefly, and show how the reading changes.
  Demo C — Compare
    Explain how checking the soil before watering can help avoid unnecessary watering.

## Tip: Calibrate the sensor before the exhibition. The displayed percentage is an estimate, and readings may change with soil type and sensor condition.
