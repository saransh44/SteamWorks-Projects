#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
CircuitPlayground.begin();
}

void loop() {
  if(CircuitPlayground.leftButton()|| CircuitPlayground.rightButton())//Either button can be turn on
  {
    CircuitPlayground.strip.setPixelColor(4,255,0,0);
    CircuitPlayground.strip.show();
  }
  
  else{
    CircuitPlayground.strip.setPixelColor(4,0,0,0);
    CircuitPlayground.strip.show();
  }
  
}
