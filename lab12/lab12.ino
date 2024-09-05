const int motorPin = 10;   
const int potPin = A0;    

void setup() {
  pinMode(motorPin, OUTPUT);  
}

void loop() {
  int potValue = analogRead(potPin);         
  

  int motorSpeed = map(potValue, 0, 1023, 0, 255);

  analogWrite(motorPin, motorSpeed);  
}