#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup()
{
// Initialize Circuit Playground library.
  CircuitPlayground.begin();
}

//___________________________________________________________________________
void spiral(int r, int g, int b)                        //Flash spiral
{
  for(int j = 0; j < 10; j++)
  {
    CircuitPlayground.strip.setPixelColor(j, r, g, b);
    CircuitPlayground.strip.show();
  }
}
//___________________________________________________________________________
void spiralslow(int t, int r, int g, int b)
{
  for(int j = 0; j < 10; j++)
  {
    CircuitPlayground.strip.setPixelColor(j, r, g, b);            //Basic Spiral cycle
    CircuitPlayground.strip.show();
    delay(t);
  }

}

//___________________________________________________________________________
void alternate(int t, int r, int g, int b, int r2, int g2, int b2)
{
 for(int i = 0; i < 5; i ++){
    CircuitPlayground.strip.setPixelColor(2*i,100,0,0);   //2i means even
    CircuitPlayground.strip.setPixelColor(2*i+1, 0, 100, 0);  //2i+1 means odd
    CircuitPlayground.strip.show();
 }
 delay(500);
  for(int i = 0; i < 5; i ++){
    CircuitPlayground.strip.setPixelColor(2*i+1,100,0,0); 
    CircuitPlayground.strip.setPixelColor(2*i, 0, 100, 0);
    
    CircuitPlayground.strip.show();
 }
 delay(500);
}


//___________________________________________________________________________
void rainbow()//goes through rainbow cycle
{

  
  for(int j = 0; j < 256; j++)                      
  {
    spiral(255 - j, j , 0);
  }                           //As J increases, Green increases, Red Decreases
  
  for(int j = 0; j < 256; j++)
  {
    spiral(0, 255 - j, j);
  }                           //As J increases, Green Decreases, Blue Increases
  
  for(int j = 0; j < 256; j++)
  {
    spiral(j, 0, 255 - j);
  }                           //As J increases, Blue Decreases, Red Increases
                      
}
//___________________________________________________________________________
void brightnesscycle()
{
  for (int i = 0; i < 256; i++)                           //makes ring go through an increasing brightness cycle
  {
    spiral(i, i, i);
  }
  delay(2000);
}
//___________________________________________________________________________
void snaketrail()
{
  for (int i = 0; i <= 9; i++)
  {
    CircuitPlayground.strip.setPixelColor(i, 256, 0, 0);
    if (i == 0){
      CircuitPlayground.strip.setPixelColor(9, 123, 0, 0);
      CircuitPlayground.strip.setPixelColor(8, 61, 0, 0);
      CircuitPlayground.strip.show();
    }else if(i == 1){
      CircuitPlayground.strip.setPixelColor(i - 1, 123, 0, 0);
      CircuitPlayground.strip.setPixelColor(9, 61, 0, 0);
      CircuitPlayground.strip.show();
    }else{
      CircuitPlayground.strip.setPixelColor(i - 1, 123, 0, 0);
      CircuitPlayground.strip.setPixelColor(i - 2, 61, 0, 0);
      CircuitPlayground.strip.show();
    }
  }
  delay(250);
  for (int j = 0; j <= 9; j++)
  {
    CircuitPlayground.strip.setPixelColor(j, 0, 0, 0);
    CircuitPlayground.strip.show();
  }
}
//___________________________________________________________________________
void snake(){
  for(int j=0; j >= 0; j++){
    CircuitPlayground.strip.setPixelColor((j-1)%10, 0, 0,0);
    CircuitPlayground.strip.setPixelColor(j%10, j%1024, 0, 0);
    CircuitPlayground.strip.setPixelColor((j+1)%10, j%512, 0, 0);
    CircuitPlayground.strip.setPixelColor((j+2)%10, j%256, 0, 0);
    delay(60);
    CircuitPlayground.strip.show();
  }
}
//___________________________________________________________________________
void leafshield(int r, int g, int b){
  for(int i = 0; i >= 0; i++){
    CircuitPlayground.strip.setPixelColor(i % 10, r, g, b);
    CircuitPlayground.strip.setPixelColor((i + 1) % 10, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor((i + 2) % 10, r, g, b);
    CircuitPlayground.strip.setPixelColor((i + 3) % 10, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor((i + 4) % 10, r, g, b);
    CircuitPlayground.strip.setPixelColor((i + 5) % 10, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor((i + 6) % 10, r, g, b);
    CircuitPlayground.strip.setPixelColor((i + 7) % 10, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor((i + 8) % 10, r, g, b);
    CircuitPlayground.strip.setPixelColor((i + 9) % 10, 0, 0, 0);
    delay(600);
    CircuitPlayground.strip.show();
  }
}
//___________________________________________________________________________


//___________________________________________________________________________
void loop()
{
  //leafshield(0,255,200);
  //snake();
  //snaketrail();
  rainbow();
}

