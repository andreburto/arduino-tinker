#include <stdio.h>
#include <iostream>
#include "ClFu.h"

using namespace std;

void sayHi() {
    std::cout << "Hello!" << std::endl;
}

void sayBye() {
    std::cout << "Bye!" << std::endl;
}

void hellYeah() {
    std::cout << "HELL YEAH!" << std::endl;
}

int main()
{
    ClFu *x = new ClFu();
    x->addNew('a', sayHi);
    x->addNew('b', sayBye);
    x->doThing('a');

    if(x->update('a', hellYeah)) {
        x->doThing('a');
    }

    x->doThing('b');
    x->~ClFu();
    return 0;
}
