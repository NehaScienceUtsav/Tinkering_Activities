#include <NewPing.h>

// Define the pins for the ultrasonic sensor
const int trigPin = 8; // Trigger pin
const int echoPin = 9; // Echo pin

// Create an instance of the NewPing library
NewPing sonar(trigPin, echoPin);

void setup() {
  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // Measure distance using the NewPing library
  unsigned int distance_cm = sonar.ping_cm();

  // Check if the distance measurement is valid
  if (distance_cm != NewPing::NO_ECHO) {
    // Print the distance to the Serial Monitor
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");
  } else {
    Serial.println("Error: No echo received");
  }

  // Add a delay between measurements (adjust as needed)
  delay(1000);
}