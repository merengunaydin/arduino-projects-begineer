void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int redCars = 11;
  int yellowCars = 12;
  int greenCars = 13;
  int redPedestrian = 9;
  int greenPedestrian = 10;

  digitalWrite(greenCars, LOW);
  digitalWrite(redPedestrian, LOW);
  digitalWrite(redCars, HIGH);
  digitalWrite(greenPedestrian, HIGH);
  delay(3000);
  digitalWrite(redCars, LOW);
  digitalWrite(yellowCars, HIGH);
  digitalWrite(greenPedestrian, HIGH);
  delay(1000);
  digitalWrite(yellowCars, LOW);
  digitalWrite(greenPedestrian, LOW);
  digitalWrite(greenCars, HIGH);
  digitalWrite(redPedestrian, HIGH);
  delay(3000);
}
