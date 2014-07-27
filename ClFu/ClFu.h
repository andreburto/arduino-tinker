/**********************************************************************
 * ClFu is a Class Function controller intended to make state machines
 * in Arduino projects easier to manage than a series of if...then or
 * select...case statements.
 *
 * 2014-07-27: Initial work. Only tested on PC so far.
 *
 * Andrew Burton
 **********************************************************************/

// This defines the array length of commands
const int FLEN = 36;

// The structure that links a character to a void function
struct funclist {
    char letter;
    void (*function)();
};

// The class header
class ClFu {
public:
    ClFu();
    ~ClFu();
    void addNew(char pick, void (*f)());
    bool update(char pick, void (*f)());
    void doThing(char pick);
private:
    int findLetter(char look);
    int flcnt;
    funclist fl[FLEN];
};
