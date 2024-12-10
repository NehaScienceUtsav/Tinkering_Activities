// Define the analog input pin for the sound sensor
const int soundSensorPin = A5;

void setup() {
  // Start serial communication at a baud rate of 9600
  Serial.begin(9600);

  // Set the sound sensor pin as an input
  pinMode(soundSensorPin, INPUT);

  // Initial message to indicate setup is complete
  Serial.println("Sound sensor monitoring started.");
}

void loop() {
  // Read the analog value from the sound sensor
  int soundValue = analogRead(soundSensorPin);

  // Print the sound value to the Serial Monitor
  Serial.print("Sound Value: ");
  Serial.println(soundValue);

  // Add a small delay to avoid overwhelming the Serial Monitor
  delay(500);
}
