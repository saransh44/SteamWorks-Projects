#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.playTone(263, 500); //Frequency of the note and for how long to play it (milliseconds)
  delay(1000);                          //Time between notes "gap"
}
