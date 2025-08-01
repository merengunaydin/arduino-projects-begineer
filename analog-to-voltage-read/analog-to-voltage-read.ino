int valueP = 0;
float voltage = 0.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valueP = analogRead(A0);
  voltage = valueP * (5000.0 / 1023);   // Convert to millivolts (0-5000mV range)
  Serial.print("mV = ");
  Serial.println(voltage);
}
