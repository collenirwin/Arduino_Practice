/*
 * name: Collen Irwin
 * date: 10/17/2016
 * desc: Serial Monitor
 */

const float c = 20.0;

void setup() {
  Serial.begin(9600);
  float f = (c * (9.0 / 5.0)) + 32;
  
  Serial.print(c);
  Serial.print(" degrees C in degrees F is: ");
  Serial.println(f);
}

void loop() {
  
}
