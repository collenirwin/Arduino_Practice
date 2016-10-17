/*
 * name: Collen Irwin
 * date: 10/14/2016
 * desc: Old Turn Signal (second variation)
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
    blink(lights[x], WAIT);
  }

  for (int x = 0; x < LEN; x++) {
    toggle(lights[x], 1, 0);
  }

  delay(WAIT + 250);

  for (int x = 0; x < LEN; x++) {
    toggle(lights[x], 0, 0);
  }

  delay(WAIT);
}

void blink(int port, int wait) {
  digitalWrite(port, HIGH);
  delay(wait);
  digitalWrite(port, LOW);
}

void toggle(int port, int high, int wait) {
  // high: 0 -> LOW, 1 -> HIGH
  digitalWrite(port, high);
  delay(wait);
}
