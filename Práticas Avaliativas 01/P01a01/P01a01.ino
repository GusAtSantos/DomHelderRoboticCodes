const int a = 8, b = 9, g = 6, e = 4, d = 3, c = 5, f = 7, dp = 10, led = 13;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(dp, OUTPUT); 
  pinMode(led, OUTPUT);
} 

// Funções do contador do display de 7 segmentos
// Letra: 0
void zero() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
}
// Letra: 1
void one() {
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW);
  digitalWrite (e, LOW);
  digitalWrite (f, LOW);
  digitalWrite (a, LOW);
}
// Letra: 2
void two() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, LOW);
}
// Letra: 3
void three() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, LOW);
}
// Letra: 4
void four() {
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (a, LOW);
  digitalWrite (e, LOW);
  digitalWrite (d, LOW);
}
// Letra: 5
void five() {
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, LOW);
  digitalWrite (b, LOW);
}
// Letra: 6
void six() {
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (e, HIGH);
}
// Letra: 7
void seven() {
  digitalWrite (a, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, LOW);
  digitalWrite (e, LOW);
  digitalWrite (g, LOW);
  digitalWrite (d, LOW); 
}
// Letra: 8
void eight() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (e, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (d, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  delay(500);
}
// Letra: 9
void nine() {
  digitalWrite (a, HIGH);
  digitalWrite (b, HIGH);
  digitalWrite (g, HIGH);
  digitalWrite (c, HIGH);
  digitalWrite (f, HIGH);
  digitalWrite (e, LOW);
}

// Funções do led
//Letra: S
void ledinS() {
  digitalWrite (led, HIGH);
  delay(500);
  digitalWrite (led, LOW);
  delay(500);
  digitalWrite (led, HIGH);
  delay(500);
  digitalWrite (led, LOW);
  delay(500);
  digitalWrite (led, HIGH);
  delay(500);
  digitalWrite (led, LOW);
}
//Letra: O
void ledinO() {
  digitalWrite (led, HIGH);
  delay(1000);
  digitalWrite (led, LOW);
  delay(1000);
  digitalWrite (led, HIGH);
  delay(1000);
  digitalWrite (led, LOW);
  delay(1000);
  digitalWrite (led, HIGH);
  delay(1000);
  digitalWrite (led, LOW);
}

//Exibição
void loop() {

  for (int i = 0; i <= 9; i ++) {
    ledinS(); //Chama a função da letra S do led em código morse.
    delay(2000); //Delay de 2s
    ledinO(); //Chama a função da letra O do led em código morse.
    delay(2000); //Delay de 2s
    ledinS(); //Chama a função da letra S do led em código morse.
    delay(2000); //Delay de  2s

    switch(i) {
      case 0:
      zero();
      break;
      case 1:
        one();
        break;
      case 2:
        two();
        break;
      case 3:
        three();
        break;
      case 4:
        four();
        break;
      case 5:
        five();
        break;
      case 6:
        six();
        break;
      case 7:
        seven();
        break;
      case 8:
        eight();
        break;
      case 9:
        nine();
        break;
    }
  }
}
