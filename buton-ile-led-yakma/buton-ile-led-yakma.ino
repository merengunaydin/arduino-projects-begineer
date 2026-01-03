int redLed = 2;
int greenLed = 3;
int yellowLed = 4;
int button = 8;
int state;

void setup()
{
  pinMode(button, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop()
{
  state = digitalRead(button);
  if(state == 1){
  	digitalWrite(redLed, HIGH);
  	digitalWrite(greenLed, HIGH);
  	digitalWrite(yellowLed, HIGH);
  }
  else{
    digitalWrite(redLed, LOW);
  	digitalWrite(greenLed, LOW);
  	digitalWrite(yellowLed, LOW);
  }
}