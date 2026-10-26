const int a = 8, b = 9, g = 6, e = 2, d = 3, c = 4, f = 7;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(f, OUTPUT);
}

void loop() {
  digitalWrite (a, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  delay(200);
  digitalWrite (b, HIGH);
  delay(500);
  digitalWrite (b, LOW);
  delay(200);
  digitalWrite (g, HIGH);
  delay(500);
  digitalWrite (g, LOW);
  delay(200);
  digitalWrite (e, HIGH);
  delay(500);
  digitalWrite (e, LOW);
  delay(200);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite (d, LOW);
  delay(200);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (c, LOW);
  delay(200);
  digitalWrite (g, HIGH);
  delay(500);
  digitalWrite (g, LOW);
  delay(200);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (f, LOW);
  delay(200);
}
