#include <Adafruit_LiquidCrystal.h>

// Initialize the LCD using the I2C expander module
// The parameters are: I2C address, columns, and rows
Adafruit_LiquidCrystal lcd(0);

void setup() {
  // Set up the LCD's number of columns and rows (16x2 in this case)
  lcd.begin(16, 2);

  // Turn on the backlight
  lcd.setBacklight(1);

  // Display "ScienceUtsav" on the LCD
  lcd.print("ScienceUtsav");
}

void loop() {
  // Do nothing here...
}
