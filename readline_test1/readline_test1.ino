char words[255];
int wcnt = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char temp = Serial.read();
    words[wcnt] = temp;
    wcnt++;
    
    //Serial.println(temp);
    
    if (temp == '\n') {
      int tcnt = 0;
      while(tcnt < wcnt) {
        Serial.print(words[tcnt]);
        tcnt++;
      }
      //Serial.print('\n');
      wcnt=0;
    }
  }
}
