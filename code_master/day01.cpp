#include <iostream>
#include <string>

using namespace std;

void printString(string value);
void printString2(string& value);

int main()
{
  int number = 10;
  int *pNumber = &number;
  string name = "Alexander the great";
  string *pName = &name;

  cout << *pNumber << endl;
  cout << *pName << endl;

  string city = "Salvador";
  printString(city);
  printString2(city);

  return 0;
}

void printString(string value)
{

  cout << value << endl;
}

void printString2(string& value)
{

  cout << value << endl;
}