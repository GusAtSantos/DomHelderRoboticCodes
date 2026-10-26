const int pino_LED=13;

void setup() {
  pinMode(pino_LED, OUTPUT);
}

void loop() {
  digitalWrite(pino_LED, HIGH);
  delay(1000);
  digitalWrite(pino_LED, LOW);
  delay(1000);

}
