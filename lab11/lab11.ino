const int motorPin = 9;   
const int buttonPin = 2;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);  
  
  if (buttonState == HIGH) { 
    digitalWrite(motorPin, HIGH); 
  } else {
    digitalWrite(motorPin, LOW);
  }
}