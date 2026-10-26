const int ledVerde = 2, ledAmarelo = 3, ledVermelho = 4, push = A0, ledVerdePed = 5, ledVermelhoPed = 6;
const int a = 8, b = 7, c = 9, d = 10, e = 11, f = 12, g = 13;
void setup() {
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerdePed, OUTPUT);
  pinMode(ledVermelhoPed, OUTPUT);
  pinMode (push, INPUT_PULLUP);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void zero() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);  
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void one() {
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
}
void two() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);  
  digitalWrite (d, HIGH);
  digitalWrite (g, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
  digitalWrite (g, LOW);
}
void three() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);  
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
}
void four() {
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);  
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void five() {
  digitalWrite (a, HIGH); 
  digitalWrite (d, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void piscadela() {
  digitalWrite (ledVerdePed, LOW);
  delay(150);
  digitalWrite (ledVerdePed, HIGH);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  digitalWrite(ledVermelhoPed, HIGH);
  if (digitalRead (push) == LOW) {
    delay(500);
    digitalWrite (ledVerde, LOW);
    digitalWrite (ledAmarelo, HIGH);
    delay (2000);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite (ledVermelhoPed, LOW);
    digitalWrite (ledVerdePed, HIGH);
    delay (833);
    five();
    delay (833);
    four();
    delay (833);
    piscadela();
    three();
    delay (833);
    piscadela();
    two();
    delay (833);
    piscadela();
    one();
    delay (833);
    zero();
    digitalWrite (ledVerdePed, LOW);
    digitalWrite (ledVermelho, LOW);
  }
}
