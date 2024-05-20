#include <Servo.h>

Servo servo;
int pos = 0;

void setup() {
  servo.attach(13);
}

void loop() {
  servo.write(0);
  delay(5000);
  servo.write(90);
  delay(5000);
  servo.write(180);
  delay(5000);
}
