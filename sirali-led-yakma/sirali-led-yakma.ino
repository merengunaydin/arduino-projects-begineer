int redLed = 2;
int greenLed = 3;
int yellowLed = 4;
int i;
#define N 1000

void setup()
{
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop()
{
  digitalWrite(redLed, HIGH);
  delay(N);
  digitalWrite(greenLed, HIGH);
  delay(N);
  digitalWrite(yellowLed, HIGH);
  delay(N);

  for(i = 0; i < 2; i++){
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    delay(N / 2);
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, HIGH);
    digitalWrite(yellowLed, HIGH);
    delay(N / 2);
  }
  
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  delay(N);
}