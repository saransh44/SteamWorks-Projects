#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
CircuitPlayground.begin();
}

void loop() {
  if(CircuitPlayground.leftButton()){                 //IF the Left button is pressed
    CircuitPlayground.strip.setPixelColor(4,255,0,0); //Pixel number 4 (5th pixel) turns red
    CircuitPlayground.strip.show();
  }
  else{                                               //"else" if the Left button is NOT pressed
    CircuitPlayground.strip.setPixelColor(4,0,0,0);   //Pixel number 4 (5th pixel) is off
    CircuitPlayground.strip.show();
  }
  
}
