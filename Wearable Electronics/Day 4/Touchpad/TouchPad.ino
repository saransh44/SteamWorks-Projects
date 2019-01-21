#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

int touchpad=3;
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}
void loop() {
  int Pressure=CircuitPlayground.readCap(touchpad);//detectst the touch a pad recieves
  Serial.print("Capsense #3: "); 
  Serial.println(Pressure);//Outputs the relative value of the force acting on the pad

  Pressure=CircuitPlayground.readCap(touchpad);//detectst the touch a pad recieves
  if(Pressure>50){
    Serial.println("Capsense #3: Touched");
    CircuitPlayground.strip.setPixelColor(1,255,0,0);
    CircuitPlayground.strip.show();
  }
  else{
    Serial.println("Capsense #3: Untouched");
    CircuitPlayground.strip.setPixelColor(1,0,0,0);
    CircuitPlayground.strip.show();
  }
  delay(100);
  
  if(Pressure>50&&Pressure<300){
    Serial.println("Friend Incoming!");
  }
  else if(Pressure>=300&&Pressure<1000){
    Serial.println("STRANGER DANGER!!");
  }
  delay(2000);
}
