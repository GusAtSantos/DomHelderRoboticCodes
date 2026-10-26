#define pinPIR 12
int const led = 10;
int const push = 8;

void setup() {
  pinMode (pinPIR, INPUT);
  pinMode (led, OUTPUT);
  pinMode (push, INPUT_PULLUP);
  Serial.begin(9000);
}

void loop() {


  if (digitalRead (push) == LOW) {
    digitalWrite (led, LOW);
  }
  else {
  if (digitalRead(pinPIR)) {
    Serial.println("Detected");
    digitalWrite(led,HIGH);
  } else {
    Serial.print("----");
    }
  }
}
