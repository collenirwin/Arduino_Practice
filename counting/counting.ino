/*
 * name: Collen Irwin
 * date: 10/14/2016
 * desc: Counting in base 2
 */

int power(int n, int ex);
void count(int num);
void toggle(int port, int high, int wait);

const int LEN  = 4;
const int WAIT = 1000;

int lights[]   = { 2, 4, 8, 12 };
char digits[]  = "0000";
int currentNum = 0;

void setup() {
  for (int x = 0; x < LEN; x++) {
    pinMode(lights[x], OUTPUT);
  }
}

void loop() {
  currentNum = (currentNum < 15) ? currentNum + 1 : 0;
  count(currentNum);

  for (int x = 0; x < LEN; x++) {
    toggle(lights[x], (digits[x] == '1'), 0);
  }

  delay(WAIT);
}

void count(int num) {
  for (int x = 0; x < LEN; x++) {
    int powerOf2 = power(2, LEN - x - 1);

    if (num >= powerOf2) {
      digits[x] = '1';
      num -= powerOf2;
    } else {
      digits[x] = '0';
    }
  }
}

int power(int n, int ex) {
  if (ex == 0) return 1;

  int val = n;
  
  for (int x = 1; x < ex; x++) {
    val *= n;
  }

  return val;
}

void toggle(int port, int high, int wait) {
  // high: 0 -> LOW, 1 -> HIGH
  digitalWrite(port, high);
  delay(wait);
}
