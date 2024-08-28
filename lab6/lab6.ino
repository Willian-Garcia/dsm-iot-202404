int potPin = A1;      
int ledPin = 10;       
int potValue = 0;     
int ledBrightness = 0;

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  potValue = analogRead(potPin);  
  ledBrightness = map(potValue, 0, 1023, 0, 255);
  analogWrite(ledPin, ledBrightness);
}