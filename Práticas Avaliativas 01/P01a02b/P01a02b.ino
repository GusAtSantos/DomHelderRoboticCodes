#include <TM1637Display.h>
#include "SevSeg.h"
#define CLK 2
#define DIO 3
SevSeg setSeg;
TM1637Display display(CLK, DIO);


const int a = 6, b = 7, c =8, d = 9, e = 10, f = 11, g = 12, ledOne = 5, ledTwo = 4, ledThree = 3, ledFour = 2;

const uint8_t SEG_LETRAS[][7] = {
  {a|b|c|e|f|f,  
   b|c|g,        
   a|d|e|f,      
   b|c|d|e|g,   
   a|d|e|f|g,   
   a|e|f|g,      
   a|b|c|d|e|f}  
};

void setup() {
  byte numDigitos = 1, 2, 3, 4, 5, 6, 7, 8 , 9, 0;
  byte digiPinos[] = {};
  byte pinosDisplay[]={6,7,8,9,10,11,12};
  bool resistoresSegmentos = true;
  setSeg.begin(COMMON_CATHODE, numDigitos,digiPinos,pinosDisplay,resistoresSegmentos);
  setSeg.setBrightness(90);
}

void loop() {

}
