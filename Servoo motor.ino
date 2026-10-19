#include <Servo.h>

Servo servo;

const int potPin = A0;     // پتانسیومتر
const int servoPin = 9;    // پین سروو

void setup() {
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int rawValue = analogRead(potPin);          // خواندن مقدار پتانسیومتر (0 تا 1023)
  int angle = map(rawValue, 0, 1023, 0, 180);  // تبدیل به زاویه (0 تا 180)

  servo.write(angle);                          // حرکت سروو

  Serial.print("زاویه موتور سروو : ");
  Serial.println(angle);

  delay(50);
}