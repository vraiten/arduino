#include <Servo.h>

#define SERVO 9

Servo servo;

void setup() {
  
}

void loop() {

  // 90도 이동하기 
  servo.attach(SERVO); 
  servo.write(90); 
  delay(500);
  servo.detach();
  delay(1000);
  
  //180도 이동하기 
  servo.attach(SERVO); 
  servo.write(180); 
  delay(500);
  servo.detach();
  delay(1000);
  
  //0도 이동하기
  servo.attach(SERVO); 
  servo.write(0); 
  delay(500);
  servo.detach();
  delay(1000);
}
