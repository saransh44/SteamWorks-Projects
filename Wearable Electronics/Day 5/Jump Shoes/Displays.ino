void redSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,255,0,0);
    CircuitPlayground.strip.show();
  }
}
void greenSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,0,255,0);
    CircuitPlayground.strip.show();
  }
}
void blueSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,0,0,255);
    CircuitPlayground.strip.show();
  }
}
void tealSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,0,255,255);
    CircuitPlayground.strip.show();
  }
}
void amberSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,255,255,0);
    CircuitPlayground.strip.show();
  }
}
