/*****
 * MORSE CODE
 *****/

#include "Morse.h"
 
// VARIABLES
Morse* m;
char msg[255];
int mcnt = 0;
int led = 13;

void setup() {
  // Initialize the Morse object
  m = new Morse(led);
  
  // Start the serial connection
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    // Collect characters
    while (Serial.available() > 0) {
      char temp = Serial.read();
      if (temp != '\n' && temp != '\r') {
        if (temp > 96 && temp < 123) { temp -= 32; }
        if ((temp > 64 && temp < 91) || (temp > 47 && temp < 58) || temp == 32) {
          if (mcnt == 255) { break; }
          msg[mcnt] = temp;
          mcnt++;
        } 
      }
    }
    
    // Feed the array in
    m->say(msg);
    
    // Empty the msg array
    nullMsg();
  }
}

void nullMsg() {
  for(int clr = 0; clr < 255; clr++) {
    msg[clr] = '\0';
  }
}
