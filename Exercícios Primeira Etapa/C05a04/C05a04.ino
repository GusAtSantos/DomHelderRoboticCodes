const int ledPinR1 = 13;
const int ledPinG = 12;
const int ledPinR2 = 11;
const int ledPinY = 10;


void setup() {
  pinMode(ledPinR1, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinR2, OUTPUT);
  pinMode(ledPinY, OUTPUT);
}

void loop() {

  int PotValue = analogRead(A1);
  int brilho = map(PotValue, 0, 1023, 0, 255);
  
  digitalW3rite(ledPinR1, LOW);
  digitalWrite(ledPinG, LOW);
  digitalWrite(ledPinR2, LOW);
  digitalWrite(ledPinY, LOW);

  // Divide o potenciômetro em 4 partes
  if (PotValue < 100) {
    digitalWrite(ledPinR1, LOW);
  }
  else if (PotValue < 257) {
    digitalWrite(ledPinR1, HIGH);
  }
  else if (PotValue < 512) {
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinR1, HIGH);
  }
  else if (PotValue < 768) {
    digitalWrite(ledPinR2, HIGH);
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinR1, HIGH);
  }
  else {
    digitalWrite(ledPinY, HIGH);
    digitalWrite(ledPinR2, HIGH);
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinR1, HIGH);
  }
}
