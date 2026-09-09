#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
lcd.begin(16,2);
lcd.backlight() 
}

void loop() {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Display LCD");
  lcd.setCursor(2,1);
  lcd.print("DOM HELDER");
  delay(2000);
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Olá mundo!");
  delay(2000);
}
