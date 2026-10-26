const int a = 6, b = 7, c =8, d = 9, e = 10, f = 11, g = 12, ledOne = 5, ledTwo = 4, ledThree = 3, ledFour = 2;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(ledOne, OUTPUT); 
  pinMode(ledTwo, OUTPUT);
  pinMode(ledThree, OUTPUT);
  pinMode(ledFour, OUTPUT);
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
  digitalWrite(ledFour, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite(ledFour, LOW);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
}
void two() {
  digitalWrite(ledThree, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite(ledThree, LOW);
  digitalWrite(a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
}
void three() {
  digitalWrite(ledFour, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite(ledFour, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
}
void four() {
  digitalWrite(ledTwo, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  digitalWrite (f, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
}
void five() {
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
}
void six() {
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  digitalWrite (e, LOW);
}
void seven() {
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
}
void eight() {
  digitalWrite(ledOne, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void nine() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void ten() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void eleven() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
}
void twelve() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite (a, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
  digitalWrite (f, LOW);
}
void thirdteen() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (b, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (b, LOW);
}
void fourteen() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite (a, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (f, LOW);
}
void fifteen() {
  digitalWrite(ledOne, HIGH);
  digitalWrite(ledTwo, HIGH);
  digitalWrite(ledThree, HIGH);
  digitalWrite(ledFour, HIGH);
  digitalWrite (a, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite(ledOne, LOW);
  digitalWrite(ledTwo, LOW);
  digitalWrite(ledThree, LOW);
  digitalWrite(ledFour, LOW);
  digitalWrite (a, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (f, LOW);
}

void loop() {
  zero();
  delay(500);
  one();
  delay(500);
  two();
  delay(500);
  three();
  delay(500);
  four();
  delay(500);
  five();
  delay(500);
  six();
  delay(500);
  seven();
  delay(500);
  eight();
  delay(500);
  nine();
  delay(500);
  ten();
  delay(500);
  eleven();
  delay(500);
  twelve();
  delay(500);
  thirdteen();
  delay(500);
  fourteen();
  delay(500);
  fifteen();
  delay(500);
}
