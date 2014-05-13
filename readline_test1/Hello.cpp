#ifndef HELLO
#define HELLO
#include "Hello.h";

Hello::Hello() {
        this->start = this->name;
}
 
Hello::~Hello() { }
 
void Hello::getName() {
        char gn[100];
        this->setName(gn);
}
 
void Hello::setName(char *name) {
        int c = 0;
        while (*name != '\0') {
                this->name[c] = *name;
                name++;
                c++;
        }
        this->name[c] = '\0';
}
 
void Hello::sayName() {
        //cout << "Your name is: " << this->start << "." << endl;
}

#endif
