#include <iostream>

int main() {

  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 18) {
    std::cout << "You can drive" << "\n";
  } else {
    std::cout << "Can't drive yet" << "\n";
  }


  return 0;
}