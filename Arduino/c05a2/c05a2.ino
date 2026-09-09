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
  delay(200);
   
}
