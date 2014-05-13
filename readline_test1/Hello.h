class Hello {
public:
        Hello();
        ~Hello();
        void getName();
        void setName(char *name);
        void sayName();
private:
        char name[255];
        char *start;
};
