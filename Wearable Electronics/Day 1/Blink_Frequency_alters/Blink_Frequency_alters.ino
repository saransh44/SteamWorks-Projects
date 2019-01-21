#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
//---------------------------------------------------------
int t1=10000;
int t2=1;
void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //define your time functions
  t1=t1/2;     //Time increases linearly
  t2=5*t2;     //Time increases Geometrically
 // Serial.println("LED on");
  CircuitPlayground.redLED(true);
  delay(t2);              
 // Serial.println("LED off");
  CircuitPlayground.redLED(false);
  delay(t1);
}
