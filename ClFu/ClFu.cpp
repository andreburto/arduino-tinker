#ifndef CLFU
#define CLFU
#include "ClFu.h";

ClFu::ClFu() {
    flcnt = 0;
    for(int cnt = 0; cnt < FLEN; cnt++) {
        this->fl[cnt].letter = '\0';
    }
}

ClFu::~ClFu() { }

void ClFu::addNew(char pick, void (*f)()) {
    if (this->flcnt == FLEN) { return; }
    this->fl[this->flcnt].letter = pick;
    this->fl[this->flcnt].function = *f;
    this->flcnt++;
}

bool ClFu::update(char pick, void (*f)()) {
    int key = this->findLetter(pick);
    if (key == -1) { return false; }
    this->fl[key].function = *f;
    return true;
}

void ClFu::doThing(char pick) {
    for(int cnt=0; cnt<FLEN; cnt++) {
        if (pick == this->fl[cnt].letter) {
            this->fl[cnt].function();
            return;
        }
        else if (pick == '\0') { return; }
    };
}

int ClFu::findLetter(char look) {
    for (int cnt=0; cnt<FLEN; cnt++) {
        if (this->fl[cnt].letter == '\0') { break; }
        if (look == this->fl[cnt].letter) { return cnt; }
    }
    return -1;
}
