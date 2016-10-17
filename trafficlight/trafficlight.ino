/*
 * name: Collen Irwin
 * date: 10/14/2016
 * desc: Traffic Light (sort of)
 *       Gotta find a green LED!
 */

const int GREEN  = 2;
const int YELLOW = 4;
const int RED    = 7;

void setup() {
  pinMode(GREEN,  OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED,    OUTPUT);
}

void loop() {
  // Changed to 10 sec, 5 sec, 10 sec
  // makes it a bit nicer to watch
  blink(GREEN,  10000); // 10 seconds
  blink(YELLOW,  5000); // 5  seconds
  blink(RED,    10000); // 10 seconds
}

void blink(int port, int wait) {
  digitalWrite(port, HIGH);
  delay(wait);
  digitalWrite(port, LOW);
}
