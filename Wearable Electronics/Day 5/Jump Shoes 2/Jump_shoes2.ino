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
  if (total > 30) { //IF the acceleration is greater than the acceleration due to gravity, turn pixel red
    redSpark();
  }
  else if (total < 30.0 && total > 25.0) {
    violetSpark();
    //greenSpark();
  }
  else if (total < 25.0 && total > 20.0) {
    blueSpark();
    //greenSpark();
  }
  else if (total < 20.0 && total > 15.0) {
    tealSpark();
  }
  else if (total < 10.0) {
    greenSpark();
  }
  else {
    amberSpark();
  }

  delay(250);
  CircuitPlayground.strip.clear();

}
