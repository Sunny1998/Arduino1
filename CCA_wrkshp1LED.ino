//LED blinking program
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(A1, INPUT);

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
  
  if(analogRead(A1)>300 && analogRead(A1)<700)
    Serial.println("White");
  else
    Serial.println("Black");
  delay(2000);
  
  

}
