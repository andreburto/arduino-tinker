#include "Hello.h";

void setup() {
  Hello* h = new Hello();
  h->getName();
  h->sayName();
  h->~Hello();
}

void loop() {

}
