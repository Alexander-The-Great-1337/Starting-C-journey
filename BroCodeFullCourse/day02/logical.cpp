#include <iostream>

int main() {

  int temp;
  std::cout << "Enter a temperature: ";
  std:: cin >> temp;

  if (temp > 0 && temp < 30) {
    std::cout << "The weather today is good\n";
  } else {
    std::cout << "The wheather today is not so good\n";
  }

  return 0;
}