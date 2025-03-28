#include <iostream>

int main()
{

  std::string name = "Nice evening";
  int age = 50;
  bool isStudent = true;

  std::cout << &name << '\n';
  std::cout << &age << '\n';
  std::cout << &isStudent << '\n';

  return 0;
}