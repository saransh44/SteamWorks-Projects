void redSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 255, 0, 0);
    CircuitPlayground.strip.show();
    delay(25);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(25);
  }
}

void violetSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 255, 0, 255);
    CircuitPlayground.strip.show();
    delay(40);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(40);
  }
}

void blueSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 255);
    CircuitPlayground.strip.show();
    delay(55);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(55);
  }

}

void tealSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 0, 255, 255);
    CircuitPlayground.strip.show();
    delay(70);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(70);
  }
}

void greenSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 0, 255, 0);
    CircuitPlayground.strip.show();
    delay(85);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(85);
  }
}

void amberSpark() {
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
    CircuitPlayground.strip.show();
    delay(100);
  }
  for (int i = 9; i >= 0; i--) {
    CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
    CircuitPlayground.strip.show();
    delay(100);
  }
}
