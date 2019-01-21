#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float x,y,z; //values to measure acceleration in 3 dimensions
void setup() {
    CircuitPlayground.begin();
    Serial.begin(9600);
}

void loop() {
  x=0.0;
  y=0.0;
  z=0.0;
  float total=0.0;
  x=CircuitPlayground.motionX();  //Measures Acc. on x-axis  
  y=CircuitPlayground.motionY();  //Measures Acc. on y-axis 
  z=CircuitPlayground.motionZ();  //Measures Acc. on z-axis

  total=sqrt((x*x)+(y*y)+(z*z));  //Net force takes the square root of the sum of the squares of the individual forces, Like pythagorean theorem
  Serial.print("Total magnitude: ");Serial.print(total); Serial.println(" m/s/s");
  Serial.println();
  delay(200);
  
}
