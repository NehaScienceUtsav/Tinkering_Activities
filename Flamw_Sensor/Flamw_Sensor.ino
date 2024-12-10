const int flamePin = 2; // Digital pin where the flame sensor is connected

void setup() {
  Serial.begin(9600);
  pinMode(flamePin, INPUT);
}

void loop() {
  int flameValue = digitalRead(flamePin);

  if (flameValue == HIGH) {
    Serial.println("Flame Detected!");
  }

  delay(1000); // Adjust the delay time as needed
}
