#ifndef HELLO
#define HELLO
#include "Arduino.h";
#include "Hello.h";

Hello::Hello() {
  this->start = this->name;
  Serial.begin(9600);
}
 
Hello::~Hello() {
  Serial.end();
}

void Hello::getName() {
  // Set the variables
  char words[255];
  int wcnt = 0;
  
  // Ask
  Serial.println("What is your name?");
  
  // Hold until there's data
  while (Serial.available() == 0) { delay(100); }
  
  // Read the incoming data
  while (Serial.available() > 0) {
    char temp = Serial.read();
    if (temp != '\n' && temp != '\r') {
      words[wcnt] = temp;
      wcnt++;
    }
  }
  
  // Terminate the character array
  if (wcnt < 255) {
    words[wcnt] = '\0';
  } else {
    words[255] = '\0';
  }
  
  // Set the name
  this->setName(words);
}
 
void Hello::setName(char *name) {
  int c = 0;
  while (*name != '\0' && c < 255) {
    this->name[c] = *name;
    name++;
    c++;
  }
  this->name[c] = '\0';
}
 
void Hello::sayName() {
  String temp = String("Your name is: ");
  temp += this->name;
  temp += ".";
  Serial.println(temp);
}

#endif
