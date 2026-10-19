int red = 22;
int yellow = 23;
int green = 24;

void setup() {
     pinMode(red,OUTPUT);
     pinMode(yellow,OUTPUT);
     pinMode(green,OUTPUT);
}
void loop() {
     digitalWrite(red,HIGH);
     delay(10000);
     digitalWrite(red,LOW);
     digitalWrite(yellow,HIGH);
     delay(1000);
     digitalWrite(yellow,LOW);
     digitalWrite(green,HIGH);
     delay(10000);
     digitalWrite(green,LOW);
     delay(10);
}