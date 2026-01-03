const int button=11;
const int buzzer=10;
void setup() {
  pinMode(button, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(button);
  if(buttonState==HIGH){
    digitalWrite(buzzer,HIGH);
  }
  else
    digitalWrite(buzzer, LOW);
}
