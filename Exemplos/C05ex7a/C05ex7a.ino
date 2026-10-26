#include "SevSeg.h"
SevSeg setSeg;


void setup() {
  // put your setup code here, to run once:
byte numDigitos = 1;
byte digiPinos[] = {};
byte pinosDisplay[]={3,2,8,7,6,4,5,9};
bool resistoresSegmentos = true;
setSeg.begin(COMMON_CATHODE, numDigitos,digiPinos,pinosDisplay,resistoresSegmentos);
setSeg.setBrightness(90);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i = 0;i <= 9 ; i++) {
  setSeg.setNumber(i);
  setSeg.refreshDisplay();
  delay(2000);
}
}
