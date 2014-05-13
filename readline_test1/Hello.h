class Hello {
public:
        Hello::Hello();
        Hello::~Hello();
        void getName();
        void setName(char *name);
        void sayName();
private:
        char name[100];
        char *start;
};
