#include <iostream>

using namespace std;

class ClassB
{
public:
  int woot;

  ClassB(int woot)
  {
    this->woot = woot;
  }
};

class ClassA
{
private:
  int &_number;
  ClassB clsB;

public:
  ClassA(int &number, ClassB classB) : _number(number), clsB(classB)
  {
  }

  int getNumber()
  {
    return _number;
  }
  int getDeepNumber() {
    return clsB.woot;
  }
};

int main()
{
  int number = 10;
  int numbe2 = 20;

  ClassB clsB(20);

  ClassA clsA(number, clsB);

  cout << clsA.getNumber() << '\n' << clsA.getDeepNumber() << '\n';

  return 0;
}