//LED blinking program
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);

}

void loop() {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(2000);
  
  digitalWrite(12,HIGH);
  delay(3000);
  digitalWrite(12,LOW);
  delay(3000);
  
  

}
