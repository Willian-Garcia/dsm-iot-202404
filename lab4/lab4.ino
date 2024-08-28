// C++ code
//
int ledred = 11;
int ledyellow = 10;
int ledgreen = 9;

void setup()
{
  pinMode(ledred, OUTPUT);
  pinMode(ledyellow, OUTPUT);
  pinMode(ledgreen, OUTPUT);
}

void loop()
{
  digitalWrite(ledgreen, HIGH);
  delay(2000);
  
  digitalWrite(ledgreen, LOW);
  
  digitalWrite(ledyellow, HIGH);
  delay(1000);
  
  digitalWrite(ledyellow, LOW);
  
  digitalWrite(ledred, HIGH);
  delay(2500);
  
  digitalWrite(ledred, LOW);
}
