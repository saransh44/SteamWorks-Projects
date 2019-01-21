#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float x, y, z; //values to measure acceleration in 3 dimensions

void setup() {
  CircuitPlayground.begin();
  Serial.begin(9600);
}

void loop() {
  x = 0.0;
  y = 0.0;
  z = 0.0;
  x = CircuitPlayground.motionX(); //Measures Acc. on x-axis
  Serial.print("X: "); Serial.print(x); Serial.println(" m/s/s");
  y = CircuitPlayground.motionY(); //Measures Acc. on y-axis
  Serial.print("Y: "); Serial.print(y); Serial.println(" m/s/s");
  z = CircuitPlayground.motionZ(); //Measures Acc. on z-axis
  Serial.print("Z: "); Serial.print(z); Serial.println(" m/s/s");
  Serial.println();
  delay(500);

}
