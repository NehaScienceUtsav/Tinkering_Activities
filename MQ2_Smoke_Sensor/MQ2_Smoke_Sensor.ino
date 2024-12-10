#define MQ2pin A3 // Use A0 for analog input

void setup() {
Serial.begin(9600); // Sets the serial port to 9600
Serial.println("MQ2 warming up!");
delay(20000); // Allow the MQ2 to warm up
}

void loop() {
float sensorValue = analogRead(MQ2pin); // Read analog input pin A0
Serial.print("Smoke Sensor Value: ");
Serial.println(sensorValue);
delay(2000); // Wait 2 seconds for the next reading
}