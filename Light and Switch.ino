// نام گزاری LED ها
int led1 = 2;
int led2 = 4;
// نام گزاری کلید 1
int b1 = 7;
int bp1 = 8;
// نام گزاری کلید 2
int b2 = 12;
int bp2 = 13;

void setup() {
  // تعریف LED ها
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  // تعریف کلید 1
  pinMode(b1,INPUT);
  pinMode(bp2,INPUT_PULLUP);
  // تعریف کلید 2
  pinMode(b2,INPUT);
  pinMode(bp2,INPUT_PULLUP);
  // تعریف serial monitor
  Serial.begin(9600);
}
void loop() {
  // انتقال داده از کلید به متغییر
  int br1 = digitalRead(b1);
  int br2 = digitalRead(b2);
  // روشن شدن چراغ 1
  if (br1 == LOW) {
    digitalWrite(led1,HIGH);
    digitalWrite(bp1,HIGH);
    // نمایش در مانیتور
    Serial.println("LED 1 = on");
  }
  // خاموش شدن چراغ 1
  else {
    digitalWrite(led1,LOW);
    digitalWrite(bp1,LOW);
    // نمایش در مانیتور
    Serial.println("LED 1 = off");
  }
  // روشن شدن چراغ 2
  if (br2 == LOW) {
    digitalWrite(led2,HIGH);
    digitalWrite(bp2,HIGH);
    // نمایش در مانیتور
    Serial.println("LED 2 = on");
  }
  // خاموش شدن چراغ 2
  else {
    digitalWrite(led2,LOW);
    digitalWrite(bp2,LOW);
    // نمایش در مانیتور
    Serial.println("LED 2 = off");
  }
  delay(100);
}
