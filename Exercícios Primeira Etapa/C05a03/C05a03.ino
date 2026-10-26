#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
lcd.init();
lcd.backlight();
}

void loop() {
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Moura");
  lcd.setCursor(2,1); 
  lcd.print("Santos");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Santos");
  lcd.setCursor(2,1); 
  lcd.print("Fontinelli");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Fontinelli");
  lcd.setCursor(2,1); 
  lcd.print("Silva");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Silva");
  lcd.setCursor(2,1); 
  lcd.print("Leite");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Leite");
  lcd.setCursor(2,1); 
  lcd.print("Oliveira");
  delay(2000);
  lcd.clear();
  lcd.setCursor(2,0);
  lcd.print("Oliveira");
  lcd.setCursor(2,1); 
  lcd.print("Moura");
  delay(2000);
}