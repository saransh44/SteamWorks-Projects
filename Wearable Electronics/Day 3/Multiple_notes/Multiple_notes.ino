//Curtousey of Ben Gomez, a student at my school

#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.playTone(329.63, 1400);
  CircuitPlayground.playTone(261.63, 1400);
  CircuitPlayground.playTone(293.66, 1400);
  CircuitPlayground.playTone(246.94, 1400);
  CircuitPlayground.playTone(261.63, 1400);
  CircuitPlayground.playTone(220.00, 1400);
  CircuitPlayground.playTone(207.65, 1400);
  CircuitPlayground.playTone(246.94, 1400);
  CircuitPlayground.playTone(329.63, 1400);
  CircuitPlayground.playTone(261.63, 1400);
  CircuitPlayground.playTone(293.66, 1400);
  CircuitPlayground.playTone(246.94, 1400);
  CircuitPlayground.playTone(261.63, 700);
  CircuitPlayground.playTone(329.63, 700);
  CircuitPlayground.playTone(440.00, 700);
  CircuitPlayground.playTone(440.00, 700);
  CircuitPlayground.playTone(415.30, 2800);
  
  for (int i = 0; i < 4; i++) {
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(493.88, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(587.33, 700);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(493.88, 350);
    CircuitPlayground.playTone(440.00, 700);
    CircuitPlayground.playTone(440.00, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(587.33, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(493.88, 700);
    CircuitPlayground.playTone(493.88, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(587.33, 700);
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(523.25, 700);
    CircuitPlayground.playTone(440.00, 700);
    CircuitPlayground.playTone(440.00, 700);
    delay(700);
    
    CircuitPlayground.playTone(587.33, 1050);
    CircuitPlayground.playTone(698.46, 350);
    CircuitPlayground.playTone(880.00, 700);
    CircuitPlayground.playTone(783.99, 350);
    CircuitPlayground.playTone(698.46, 350);
    CircuitPlayground.playTone(659.25, 1050);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(587.33, 350);
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(587.33, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(493.88, 700);
    CircuitPlayground.playTone(493.88, 350);
    CircuitPlayground.playTone(523.25, 350);
    CircuitPlayground.playTone(587.33, 700);
    CircuitPlayground.playTone(659.25, 700);
    CircuitPlayground.playTone(523.25, 700);
    CircuitPlayground.playTone(440.00, 700);
    CircuitPlayground.playTone(440.00, 700);
    delay(700);
  }
}
