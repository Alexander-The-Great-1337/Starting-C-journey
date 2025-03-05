#include <iostream>

int main()
{

  int grade = 50;

  grade >= 60 ? std::cout << "Your passed!" : std::cout << "You fail!" << "\n";

  int number = 6;
  number % 2 ? std::cout << "ODD" : std::cout << "EVEN" << "\n";

  bool hungry = true;
  // hungry ? std::cout << "Your are hungry" : std::cout << "You are full";

  std::cout << (hungry ? "You are hungry" : "You are full");

  return 0;
}