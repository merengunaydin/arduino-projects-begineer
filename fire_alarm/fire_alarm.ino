#include <LiquidCrystal_I2C.h>
#include <Wire.h>

// Initialize LCD: 0x27 address, 16 column, 2 rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int sensorPin = A0;
const int ledPin = 2;
const int buzzerPin = 3;
float temperature = 0.0;

void setup() {
    lcd.init();
    lcd.backlight();
    Serial.begin(9600);
    
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
}

void loop() {
    // Read analog value and convert to temperature
    int rawValue = analogRead(sensorPin);
    temperature = (rawValue / 338.0) * 165.0 - 50.0;

    Serial.print("Current Temp: ");
    Serial.println(temperature);

    if (temperature > 60.0) {
        digitalWrite(ledPin, HIGH);
        digitalWrite(buzzerPin, HIGH);

        lcd.setCursor(0, 0);
        lcd.print("   WARNING!    "); // Professional alert
        lcd.setCursor(0, 1);
        lcd.print("Temp: ");
        lcd.print(temperature);
        lcd.print(" C  ");
    } 
    else {
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzerPin, LOW);
        
        lcd.setCursor(0, 0);
        lcd.print("  Temp Normal   ");
        lcd.setCursor(0, 1);
        lcd.print("Temp: ");
        lcd.print(temperature);
        lcd.print(" C  ");
    }
    
    delay(500); // Stabilization delay
}