#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>


void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {

  //for (int m = 9; m >= 0; m--) {   //minutes


  for (int s = 9; s >= 0; s--) {    //5 seconds


    //delay(5000);
    for (int i = 9; i >= 0; i--) {  //10-sec count
      CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
      CircuitPlayground.strip.show();
      delay(500);
      CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);

      CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);

      CircuitPlayground.strip.show();



    }

    //CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
    //CircuitPlayground.strip.show();
    /*
            if (s == 5) {
              for (int i = 9; i >= 0; i--) {
                CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
                CircuitPlayground.strip.show();
                delay(500);
                if (i == s) {
                  CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
                  CircuitPlayground.strip.show();
                }
                else
                {
                  CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
                  CircuitPlayground.strip.show();
                }
              }
            }
    */
    /*
      if ( s == 0) {
      for (int i = 9; i >= 0; i--) {
        CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
        CircuitPlayground.strip.show();
        delay(500);
        if (i == s) {
          CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
          CircuitPlayground.strip.show();
        }
        else
        {
          CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
          CircuitPlayground.strip.show();
        }
      }

      }
    */

  }   //seconds
  //    CircuitPlayground.strip.setPixelColor(m, 0, 255, 0);
  //  CircuitPlayground.strip.show();
  //}    //minutes
}





