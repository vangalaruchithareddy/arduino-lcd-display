// Name: Ruchitha Reddy
// College: Sri Venkateshwara College Of Engineering
// Project: LCD Display - Custom Message

#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
// (RS, EN, D4, D5, D6, D7)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print name on first row
  lcd.setCursor(0, 0);
  lcd.print("Ruchitha Reddy");
  
  // Print college name on second row
  lcd.setCursor(0, 1);
  lcd.print("Sri Venkateshwara College Of Engineering");
}

void loop() {
  // Nothing to do here, static display
}
