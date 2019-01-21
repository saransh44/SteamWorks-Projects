#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
  CircuitPlayground.begin();
}

// the loop function runs over and over again forever
void loop() {
  CircuitPlayground.redLED(true);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  CircuitPlayground.redLED(false);   // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
