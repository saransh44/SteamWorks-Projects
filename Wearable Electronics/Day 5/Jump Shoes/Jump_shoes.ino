#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float x, y, z; //values to measure acceleration in 3 dimensions
float total = 0.0;

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {
  getAcc();         //collect magnitude of acceleration
  if (total > 11) { //IF the acceleration is greater than the acceleration due to gravity, turn pixel red
    redSpark();
  }
  else if (total < 9.0 && total > 7.0) {
    greenSpark();
  }
  else if (total < 7.0 && total > 3.0) {
    tealSpark();
  }
  else if (total < 3.0) {
    blueSpark();
  }
  else {
    amberSpark();
  }


  delay(500);
}
