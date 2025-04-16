#include <iostream>

using namespace std;

class GoodClass
{
  string _str;

public:
  GoodClass(string str) : _str(str)
  {
  }
};

class BadClass
{
  string _str;

public:
  BadClass(string str)
  {
    _str = str;
  }
};

int main()
{

  BadClass cls("WHOA");

  return 0;
}