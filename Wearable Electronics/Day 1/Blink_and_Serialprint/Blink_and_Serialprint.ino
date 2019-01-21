#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("LED on");
  CircuitPlayground.redLED(true);
  delay(1000);
  Serial.println("LED off");
  CircuitPlayground.redLED(false);
  delay(1000);
  CircuitPlayground.setPixelColor(1, 255, 255, 255);
}
