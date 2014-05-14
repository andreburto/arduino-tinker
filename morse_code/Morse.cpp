#ifndef MORSE
#define MORSE
#include "Arduino.h";
#include "Morse.h";

Morse::Morse(int led) {
  boolean bye = false;
  this->led = led;
  this->unit = 100;
  char code[37][7] = {{'A', '.', '-', '\0'},
                      {'B', '-', '.', '.', '.', '\0'},
                      {'C', '\0'},
                      {'D', '\0'},
                      {'E', '\0'},
                      {'F', '\0'},
                      {'G', '\0'},
                      {'H', '\0'},
                      {'I', '\0'},
                      {'J', '\0'},
                      {'K', '\0'},
                      {'L', '\0'},
                      {'M', '\0'},
                      {'N', '\0'},
                      {'O', '\0'},
                      {'P', '\0'},
                      {'Q', '\0'},
                      {'R', '\0'},
                      {'S', '\0'},
                      {'T', '\0'},
                      {'U', '\0'},
                      {'V', '\0'},
                      {'W', '\0'},
                      {'X', '\0'},
                      {'Y', '\0'},
                      {'Z', '\0'},
                      {'1', '.', '-', '-', '-', '-', '\0'},
                      {'2', '.', '.', '-', '-', '-', '\0'},
                      {'3', '.', '.', '.', '-', '-', '\0'},
                      {'4', '.', '.', '.', '.', '-', '\0'},
                      {'5', '.', '.', '.', '.', '.', '\0'},
                      {'6', '-', '.', '.', '.', '.', '\0'},
                      {'7', '-', '-', '.', '.', '.', '\0'},
                      {'8', '-', '-', '-', '.', '.', '\0'},
                      {'9', '-', '-', '-', '-', '.', '\0'},
                      {'0', '-', '-', '-', '-', '-', '\0'},
                      {' ', '-', '-', '.', '\0'}};

  // Copy to the attribute
  for(int x=0;x<2;x++) {
    for(int y=0;y<7;y++) {
      this->code[x][y] = code[x][y];
      if (code[x][y] == '\n') { bye = true; break; }
    }
    if (bye == true) { break; }
  }
  /*

   };*/
}

Morse::~Morse() { 
}

void Morse::say(char letters[255]) {

}

void Morse::setUnit(int t) {
  this->unit = t;
}

void Morse::dash() {
  digitalWrite(this->led, HIGH);
  delay(this->unit * 3);
  digitalWrite(this->led, LOW);
}

void Morse::dot() {
  digitalWrite(this->led, HIGH);
  delay(this->unit * 3);
  digitalWrite(this->led, LOW);
}

#endif

