#include <Servo.h>

Servo servoMotor;  // Create a servo object

void setup() {
  servoMotor.attach(12);  // Attach the servo to pin 9
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 360; angle++) {
    servoMotor.write(angle);  // Set the servo angle
    delay(5);  // Wait for the servo to reach the position
  }
  
  // Sweep from 180 to 0 degrees
  for (int angle = 360; angle >= 0; angle--) {
    servoMotor.write(angle);  // Set the servo angle
    delay(5);  // Wait for the servo to reach the position
  }
}

