class Morse {
public:
  Morse(int led);
  ~Morse();
  void say(char letters[255]);
  void setUnit(int t);
private:
  void dash();
  void dot();
  int led;
  int unit;
  char code[37][7];
};
