//LED blinking program
int a=8;
int b=7;
int c=6;
void setup() {
  // put your setup code here, to run once:
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,HIGH);
delay(100);
digitalWrite(a,LOW);
delay(200);
digitalWrite(b,HIGH);
delay(100);
digitalWrite(b,LOW);
delay(200);
digitalWrite(c,HIGH);
delay(100);
digitalWrite(c,LOW);
delay(200);
}
