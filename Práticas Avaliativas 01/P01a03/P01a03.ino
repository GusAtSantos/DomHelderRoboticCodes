const int ledVerde = 2;
const  int ledAmarelo = 3;
const int ledVermelho = 4, push = 8;;
void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode (push, INPUT_PULLUP);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  if (digitalRead (push) == LOW) {
    delay(500);
    digitalWrite (ledVerde, LOW);
    digitalWrite (ledAmarelo, HIGH);
    delay (2000);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    delay (5000);
    digitalWrite(ledVermelho, LOW);
  }
}
