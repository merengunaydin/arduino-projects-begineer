#define redLed 5
#define greenLed 3
#define yellowLed 6
int i;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop() {
    for(i=0;i<256;i++){
      analogWrite(redLed, i);
      analogWrite(greenLed, i);
      analogWrite(yellowLed, i);
      delay(20);
    }

    for(i=255;i>=0;i--){
      analogWrite(redLed, i);
      analogWrite(greenLed, i);
      analogWrite(yellowLed, i);
      delay(20);
    }
   
}
