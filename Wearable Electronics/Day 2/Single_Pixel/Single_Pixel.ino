#include <Adafruit_CircuitPlayground.h>
void setup()
{
// Initialize Circuit Playground library.
  CircuitPlayground.begin();
}

void loop(){
  // Parameters are (pixel number, red value (0 to 255), green value(0 to 255), blue value (0 to 255)
  CircuitPlayground.strip.setPixelColor(0,255,0,0);
  CircuitPlayground.strip.show();
}

