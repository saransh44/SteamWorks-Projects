#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup()
{
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();
}

void loop() {

  /* % means Modulus. It is used to find the remainder when you divide two integers.
      If a number is a multiple of its divider, then the remainder is zero. For example, 4%2=0.
      If not, then it spits out the nonzero remainder. For example, 5/3 has a remainder of two, so 5%3=2
  */

  int R = random(0, 255);
  int G = random(0, 255);
  int B = random(0, 255);

  //for (int i = 0; i >= 0; i++) { //Our make shift "clock"; It plugs in an integer 0 and increases by 1 each cycle.
  CircuitPlayground.strip.setPixelColor(0, R, G, B);
  CircuitPlayground.strip.setPixelColor(1, R, G, B);
  CircuitPlayground.strip.setPixelColor(2, R, G, B);
  CircuitPlayground.strip.setPixelColor(3, R, G, B);
  CircuitPlayground.strip.setPixelColor(4, R, G, B);
  CircuitPlayground.strip.setPixelColor(5, R, G, B);
  CircuitPlayground.strip.setPixelColor(6, R, G, B);
  CircuitPlayground.strip.setPixelColor(7, R, G, B);
  CircuitPlayground.strip.setPixelColor(8, R, G, B);
  CircuitPlayground.strip.setPixelColor(9, R, G, B);

  //    CircuitPlayground.strip.setPixelColor((i) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 2) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 3) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 4) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 5) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 6) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 7) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 1) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 8) % 10,/*R*/,/*G*/,/*B*/);
  //    CircuitPlayground.strip.setPixelColor((i + 9) % 10,/*R*/,/*G*/,/*B*/);

  CircuitPlayground.strip.show();
  delay(1000);
  // }


}
