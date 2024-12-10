#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); // RX and TX pins for Bluetooth communication

void setup()
{
  // Initialize Bluetooth communication
  BT.begin(9600);
  BT.println("Hello from Arduino");

  // Initialize Serial communication for the Serial Monitor
  Serial.begin(9600);
  while (!Serial) {
    // Wait for the serial port to connect (needed for native USB port only)
  }
  Serial.println("Type a message to send to Bluetooth:");
}

void loop()
{
  // Check if data is available on the Serial Monitor
  if (Serial.available())
  {
    String message = Serial.readStringUntil('\n'); // Read a line from the Serial Monitor
    BT.println(message); // Send the message to the Bluetooth module
    Serial.println("Sent to Bluetooth: " + message);
  }

  // Check if data is available on the Bluetooth module
  if (BT.available())
  {
    String btMessage = BT.readStringUntil('\n'); // Read a line from Bluetooth
    Serial.println("Received from Bluetooth: " + btMessage); // Display on the Serial Monitor
  }
}
