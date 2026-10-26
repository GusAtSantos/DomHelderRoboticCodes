#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

int pinTrigger = 7, pinEcho = 6, ledG = 2, ledY = 3, ledR = 4;;

void setup() {
  // Config dos pinos do sensor
  pinMode(pinTrigger, OUTPUT);
  pinMode(pinEcho, INPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledR, OUTPUT);

  // ligando o lcd
  lcd.init();                      
  lcd.backlight(); 
  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");
  delay(1500);
  lcd.clear();
}

void loop() {
  // Envia o pulso ultrassnico
  digitalWrite(pinTrigger, LOW);
  delayMicroseconds(2);
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);

  //Mede o tempo de eco
  long duration = pulseIn(pinEcho, HIGH);

  //Calcula a distância
  float mDistance = (duration * 0.00034) / 2;

  // Exibe os dados
  // imprime distancia
  lcd.setCursor(1, 0);
  lcd.print("Distancia:");
  lcd.print(mDistance, 1); // Exibe o número com 1 casa decimal
  lcd.print(" m");

  //requisitos
  if (mDistance >= 1.0) {
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, LOW);
    lcd.setCursor(0, 1);
    lcd.print("     SEGURO");
    lcd.print("                ");
  } else if (mDistance < 1.0 && mDistance >= 0.5) {
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("    CUIDADO");
    lcd.print("                ");
  } else if (mDistance < 0.5 && mDistance > 0.1) {
    digitalWrite(ledG, LOW);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, LOW);
    lcd.setCursor(0, 1);
    lcd.print("   VAI BATER");
    lcd.print("                ");
  } else {
    digitalWrite(ledG, HIGH);
    digitalWrite(ledR, HIGH);
    digitalWrite(ledY, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("     BATEU");
    lcd.print("                ");
  }
}