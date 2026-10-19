int v = 22;

void setup() {
  pinMode(v,OUTPUT); //توضیحات پروژه

}

void loop() {
  digitalWrite(v,HIGH); //روشن کردن چراغ
  delay(1000); //یک ثانیه ایستادن
  digitalWrite(v,LOW); //خاموش کردن چراغ
  delay(1000); //یک ثانیه ایستادن
}
