int redLed = 2;
int greenLed = 3;
int yellowLed = 4;
int button1 = 8;
int button2 = 9;
int flag = 0;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  if (digitalRead(button1) == HIGH) {
    flag = 1;
  } 
  else if (digitalRead(button2) == HIGH) {
    flag = 0;
  }

  if (flag == 1) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
  } else if(flag == 0) {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
  }
}
