#include <Servo.h>

// Define the digital pin for the servo motor
const int servoPin = 7;

// Create a Servo object named myServo
Servo myServo;

void setup() {
  // Start serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Attach the servo motor to the specified pin
  myServo.attach(servoPin);

  // Initial message to indicate setup is complete
  Serial.println("Servo motor movement started.");
}

void loop() {
  // Move the servo motor from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);
    delay(15); // Delay to control the speed of the servo movement
  }

  // Move the servo motor from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);
    delay(15); // Delay to control the speed of the servo movement
  }
}
