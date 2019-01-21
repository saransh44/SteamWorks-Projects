#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
  CircuitPlayground.begin();
}

void loop() {
  if (CircuitPlayground.leftButton() && !CircuitPlayground.rightButton())
  {
    for (int i = 0; i >= 0; i++) {
      CircuitPlayground.strip.setPixelColor((i - 1) % 10, 0, 0, 0);
      CircuitPlayground.strip.setPixelColor(i % 10, 255, 0, 0);
      CircuitPlayground.strip.show();
      delay(100);
    }
  }

  else if (CircuitPlayground.rightButton() && !!CircuitPlayground.leftButton()) {
    for (int i = 0; i >= 0; i++) {
      CircuitPlayground.strip.setPixelColor((i - 1) % 10, 0, 0, 0);
      CircuitPlayground.strip.setPixelColor(i % 10, 0, 255, 0);
      CircuitPlayground.strip.show();
      delay(100);
    }
  }

}
