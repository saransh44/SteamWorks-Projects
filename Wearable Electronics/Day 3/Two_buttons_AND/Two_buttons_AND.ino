#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
CircuitPlayground.begin();
}

void loop() {
  if(CircuitPlayground.leftButton()&& CircuitPlayground.rightButton())//BOTH buttons must be pressed to turn on pixel
  {
    CircuitPlayground.strip.setPixelColor(4,255,0,0);
    CircuitPlayground.strip.show();
  }
  
  else{
    CircuitPlayground.strip.setPixelColor(4,0,0,0);
    CircuitPlayground.strip.show();
  }
  
}
