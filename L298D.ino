// نام گزاری ولم ها
int v1 = A0;
int v2 = A1;
// نام گزاری پایه های موتور راست
int p1 = 9;
int p2 = 2;
int p3 = 4;
// نام گزاری پایه های موتور چپ
int p4 = 10;
int p5 = 7;
int p6 = 8;

void setup() {
  // معرفی پایه های موتور ها
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(p4,OUTPUT);
  pinMode(p5,OUTPUT);
  pinMode(p6,OUTPUT);
  // انجام کار موتور ها
  digitalWrite(p2,HIGH);
  digitalWrite(p3,LOW);
  digitalWrite(p5,HIGH);
  digitalWrite(p6,LOW);
  //روشن کردن serial
  Serial.begin(9600);
}

void loop() {
  // معرفی ولم ها
  int va1 = analogRead(v1);
  int va2 = analogRead(v2);
  // تبدیل بازه 0 تا 1023 به 0 تا 100
  int b1 = map(va1,0,1023,0,100);
  int b2 = map(va2,0,1023,0,100);
  // تبدیل بازه 0 تا 1023 به 0 تا 255 برای سرعت موتور ها
  int b3 = map(va1,0,1023,0,255);
  int b4 = map(va2,0,1023,0,255);
  // انتقال سرعت از ولم به موتور ها
  analogWrite(p1,b3);
  analogWrite(p4,b4);
  // نمایش مقدار ولم در serial
  Serial.print("volom 1 : ");
  Serial.print(va1);
  Serial.println(b1);
  Serial.print("volom 2 : ");
  Serial.print(va2);
  Serial.println(b2);
  // چند ثانیه مکث کردن
  delay(100);
}
