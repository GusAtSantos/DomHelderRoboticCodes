const int ledPIN1 = 2, ledPIN2 = 3, ledPIN3 = 4, ledPIN4 = 5, pot = A0;
int 
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPIN1, OUTPUT);
  pinMode(ledPIN2, OUTPUT);
  pinMode(ledPIN3, OUTPUT);
  pinMode(ledPIN4, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  analogRead(pot);

}
