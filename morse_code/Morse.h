class Morse {
public:
  Morse(int led);
  ~Morse();
  void Morse::say(char letters[255]);
  void Morse::setUnit(int t);
private:
  void dash();
  void dot();
  int led;
  int unit = 100;
  char code[37][6];
};
