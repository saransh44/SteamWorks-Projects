#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup()
{
// Initialize Circuit Playground library.
  CircuitPlayground.begin();
}

void loop(){

  /* % means Modulus. It is used to find the remainder when you divide two integers.
   *  If a number is a multiple of its divider, then the remainder is zero. For example, 4%2=0. 
   *  If not, then it spits out the nonzero remainder. For example, 5/3 has a remainder of two, so 5%3=2
  */
    for(int i=0;i>=0;i++){//Our make shift "clock"; It plugs in an integer 0 and increases by 1 each cycle.
    CircuitPlayground.strip.setPixelColor((i-1)%10,0,0,0); //Pixel number i-1 remains off
    CircuitPlayground.strip.setPixelColor(i%10,0,255,0); //Pixel number i turns green
    CircuitPlayground.strip.show();
    delay(100);
    }

  
}
