void redSpark() {
  for (int m = 9; m >= 0; m--) {   //minutes
    CircuitPlayground.strip.setPixelColor(m, 0, 255, 0);
    CircuitPlayground.strip.show();

    for (int s = 9; s >= 0; s--) {    //seconds

      CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
      CircuitPlayground.strip.show();
      //delay(5000);
      for (int i = 9; i >= 0; i--) {
        CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
        CircuitPlayground.strip.show();
        delay(500);
        if (i == s) {
          CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
          CircuitPlayground.strip.show();
        }
        else
        {
          CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
          CircuitPlayground.strip.show();
        }

        if (s == 5) {
          for (int i = 9; i >= 0; i--) {
            CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
            CircuitPlayground.strip.show();
            delay(500);
            if (i == s) {
              CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
              CircuitPlayground.strip.show();
            }
            else
            {
              CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
              CircuitPlayground.strip.show();
            }
          }
        }
        if ( s == 0) {
          for (int i = 9; i >= 0; i--) {
            CircuitPlayground.strip.setPixelColor(i, 255, 255, 0);
            CircuitPlayground.strip.show();
            delay(500);
            if (i == s) {
              CircuitPlayground.strip.setPixelColor(s, 255, 0, 0);
              CircuitPlayground.strip.show();
            }
            else
            {
              CircuitPlayground.strip.setPixelColor(i, 0, 0, 0);
              CircuitPlayground.strip.show();
            }
          }

        }

      }   //seconds
    }    //minutes
  }
}

