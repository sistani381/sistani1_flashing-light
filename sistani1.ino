int ledpin=8;
void setup() {
  pinMode(8, OUTPUT); // sets the digital pin 8 as out put
}

void loop() {
  digitalWrite(8, HIGH); // sets the digital pin 8 on
  delay(1000);//waits for a second
  digitalWrite(8, LOW);//sets the digital pin 8 off
  delay(1000);//waits for a second
}
