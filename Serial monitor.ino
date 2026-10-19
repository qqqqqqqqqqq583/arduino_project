const int a = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potvalue = analogRead(a);
  int aa = map(potvalue,0,1023,0,10);
  digitalWrite(a,aa);
  Serial.print("مقدار پتانسیومتر = ");
  Serial.print(aa);
  Serial.println(potvalue);

  delay(200);

}
