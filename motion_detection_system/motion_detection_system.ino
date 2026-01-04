const int sensorPin = 9;
const int buzzerPin = 11;
const int ledPin = 8;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int value = digitalRead(sensorPin);
  
  if (value == HIGH) 
  {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(200);
  } 
  else 
  {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
}