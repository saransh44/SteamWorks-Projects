void getAcc(){
  x=0.0;
  y=0.0;
  z=0.0;
  x=CircuitPlayground.motionX();  //Measures Acc. on x-axis
  Serial.print("X: "); Serial.print(x); Serial.println(" m/s/s");
  y=CircuitPlayground.motionY();  //Measures Acc. on y-axis
  Serial.print("Y: "); Serial.print(y); Serial.println(" m/s/s");
  z=CircuitPlayground.motionZ();  //Measures Acc. on z-axis
  Serial.print("Z: "); Serial.print(z); Serial.println(" m/s/s");
  Serial.println();

  total=sqrt((x*x)+(y*y)+(z*z));  //Net force takes the square root of the sum of the squares of the individual forces, Like pythagorean theorem
  Serial.print("Total magnitude: ");Serial.print(total); Serial.println(" m/s/s");
  Serial.println();
}

