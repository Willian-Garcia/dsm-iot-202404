int pir = 10;   
int relay = 2;  

void setup() {
  pinMode(pir, INPUT);     
  pinMode(relay, OUTPUT);  
  Serial.begin(9600);     
}

void loop() {
  int pirState = digitalRead(pir);  

  Serial.print("Estado do PIR: ");
  Serial.println(pirState);

  if (pirState == HIGH) {  
    Serial.println("Movimento detectado! Lâmpada acesa.");
    digitalWrite(relay, HIGH); 
    delay(5000);
    digitalWrite(relay, LOW);
  } else {
    Serial.println("Nenhum movimento. Lâmpada apagada.");
    digitalWrite(relay, LOW);
  }
}
