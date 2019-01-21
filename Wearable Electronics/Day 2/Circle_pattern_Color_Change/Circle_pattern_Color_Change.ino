#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup()
{
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
}

void loop() {

  int R = random(0, 255);
  int G = random(0, 255);
  int B = random(0, 255);
  
  for (int i = 0; i <= 10; i++) {                      //Our make shift "clock"; It plugs in an integer between and ten and increases by 1 each time.

    CircuitPlayground.strip.setPixelColor(i - 1, 0, 0, 0); //Pixel number i-1 remains off
    CircuitPlayground.strip.setPixelColor(i, R, G, B); //Pixel number i turns green
    CircuitPlayground.strip.show();
    delay(100);

  }
    for (int i = 10; i >= 0; i--) {                      //Our make shift "clock"; It plugs in an integer between and ten and increases by 1 each time.

    CircuitPlayground.strip.setPixelColor(i + 1, 0, 0, 0); //Pixel number i-1 remains off
    CircuitPlayground.strip.setPixelColor(i, R, G, B); //Pixel number i turns green
    CircuitPlayground.strip.show();
    delay(100);
  }
}
