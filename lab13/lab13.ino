#include <Servo.h>

const int button = 5;
const int pinServo = 2;

Servo cancela; 

void setup() {
  pinMode(button, INPUT);
  cancela.attach(pinServo, 500, 2500);
  cancela.write(90);
}

void loop() {
  int buttonState = digitalRead(button);
  if (buttonState == HIGH) {
    cancela.write(0);
    delay(2000);
    cancela.write(90);
    while (digitalRead(button) == HIGH) {
    }
  }
}