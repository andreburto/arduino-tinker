const int MAX_LENGTH = 5;
int number = 0;
int nmbrs[6];
int nmbr_cntr = 0;

void setup() {
  nmbrs[10] = '\0';
  Serial.begin(9600);
  delay(10);
  Serial.println("Enter a number: ");
}

void loop() {
  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      int tnum = Serial.read();
      if (nmbr_cntr < MAX_LENGTH && (tnum > 47 && tnum < 58)) {
        nmbrs[nmbr_cntr] = tnum - 48;
        nmbr_cntr++;
      }
    }
    //nmbr_cntr--;
    number = 0;
    int pwr_cnt = 0;
    while (nmbr_cntr > 0) {
      nmbr_cntr--;
      long temp = mypow(10,pwr_cnt) * nmbrs[nmbr_cntr];
      number += temp;
      pwr_cnt++;
    }
    Serial.print("Number: ");
    Serial.println(number);
    Serial.println("?");
  }
  
  // Pause 100 milliseconds
  delay(100);
}

long mypow(int a, int b) {
  if (b == 0) { return 1; }
  if (b == 1) { return long(a); }
  long temp = long(a);
  for(int i = 0; i < b-1; i++) {
    temp *= a;
  }
  return temp;
}
