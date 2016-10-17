/*
 * name: Collen Irwin
 * date: 10/17/2016
 * desc: Blink lights at a varying delay
 */

const int LEN = 4;

int lights[] = { 2, 4, 8, 12 };

int maxWait = 300;
int minWait = 50;
int wait = minWait;

int goingUp = 1;

void setup() {
  for (int x = 0; x < LEN; x++) {
    pinMode(lights[x], OUTPUT);
  }
}

void loop() {
  toggleAll(1);
  toggleAll(0);

  if (wait >= maxWait)
    goingUp = 0;
  else if (wait <= minWait)
    goingUp = 1;
  
  wait += (goingUp) ? 10 : -10;
}

void toggleAll(int high) {
  for (int x = 0; x < LEN; x++) {
    digitalWrite(lights[x], high);
  }

  delay(wait);
}
