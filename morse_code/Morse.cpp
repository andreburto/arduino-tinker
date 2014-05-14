#ifndef MORSE
#define MORSE
#include "Arduino.h";
#include "Morse.h";

Morse::Morse(int led) {
  this->led = led;
}

Morse::~Morse() { }

void Morse::say(char[255] letters) {
  
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
