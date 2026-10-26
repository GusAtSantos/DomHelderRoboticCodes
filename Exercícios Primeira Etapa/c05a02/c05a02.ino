const int a = 8, b = 9, g = 6, e = 4, d = 3, c = 5, f = 7;

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
  //0
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
  delay(350);

  //1
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  delay(350);

  //2
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
  delay(350);

  //3
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  delay(350);

  //4
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (f, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  delay(350);

  //5
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  delay(350);

  //6
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (d, LOW);
  digitalWrite (e, LOW);
  delay(350);

  //7
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (f, LOW);
  digitalWrite (b, LOW);
  digitalWrite (c, LOW);
  delay(350);

  //8
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
  delay(350);

  //9
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
  digitalWrite (a, LOW);
  digitalWrite (b, LOW);
  digitalWrite (g, LOW);
  digitalWrite (c, LOW);
  digitalWrite (f, LOW);
  delay(350);
}
