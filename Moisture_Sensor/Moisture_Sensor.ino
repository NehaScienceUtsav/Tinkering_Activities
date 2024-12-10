// Define the analog pin for the soil moisture sensor
const int soilMoisturePin = A5;

void setup() {
  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the soil moisture sensor value
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Map the sensor value to a moisture percentage (adjust the mapping range based on your sensor)
  int moisturePercentage = map(soilMoistureValue, 0, 1023, 0, 100);

  // Print the sensor value and moisture percentage to the serial monitor
  Serial.print("Soil Moisture Value: ");
  Serial.print(soilMoistureValue);
  Serial.print("\tMoisture Percentage: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  // Add a delay to avoid rapid readings
  delay(1000);  // You can adjust the delay as needed
}