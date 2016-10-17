/*
 * name: Collen Irwin
 * date: 10/14/2016
 * desc: Old fashion turn signal
 */

int lights[] = { 2, 4, 8, 12 };

const int LEN  = 4;
const int WAIT = 250;

void setup() {
  for (int x = 0; x < LEN; x++) {
    pinMode(lights[x], OUTPUT);
  }
}

void loop() {
  for (int x = 0; x < LEN; x++) {
    toggle(lights[x], 1, WAIT);
  }

  for (int x = 0; x < LEN; x++) {
    toggle(lights[x], 0, 0);
  }

  delay(WAIT);
}

void toggle(int port, int high, int wait) {
  // high: 0 -> LOW, 1 -> HIGH
  digitalWrite(port, high);
  delay(wait);
}
