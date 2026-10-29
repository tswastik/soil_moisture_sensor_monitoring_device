
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD I2C address
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Soil moisture sensor
const int sensorPin = A0;

// LED pins
const int redLED = 8;
const int blueLED = 9;
const int greenLED = 10;

// Calibrate these values for your sensor
const int DRY_VALUE = 800;
const int WET_VALUE = 350;

void setup() {
  Serial.begin(9600);

  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("SMART PLANT");
  lcd.setCursor(0, 1);
  lcd.print("DOCTOR");
  delay(2000);
  lcd.clear();
}

void loop() {
  int sensorValue = analogRead(sensorPin);

  // Estimate moisture percentage
  int moisture = map(
    sensorValue, DRY_VALUE, WET_VALUE, 0, 100
  );

  moisture = constrain(moisture, 0, 100);

  // Turn all LEDs off before selecting one
  digitalWrite(redLED, LOW);
  digitalWrite(blueLED, LOW);
  digitalWrite(greenLED, LOW);

  // Display moisture percentage
  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(moisture);
  lcd.print("%   ");

  // Select soil condition and LED
  lcd.setCursor(0, 1);

  if (moisture < 30) {
    digitalWrite(redLED, HIGH);
    lcd.print("Soil: DRY       ");
  }
  else if (moisture < 60) {
    digitalWrite(blueLED, HIGH);
    lcd.print("Soil: MODERATE  ");
  }
  else {
    digitalWrite(greenLED, HIGH);
    lcd.print("Soil: WET       ");
  }

  Serial.print("Sensor: ");
  Serial.print(sensorValue);
  Serial.print(" | Moisture: ");
  Serial.print(moisture);
  Serial.println("%");

  delay(1000);
}
