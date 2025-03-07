#include <iostream>

int main() {
  std::string name;
  int age = 0;
  bool running = true;

  // while(name.empty()) {
  //   std::cout << "Enter your name: ";
  //   std::getline(std::cin, name);
  // }
  
  while(running) {
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 18) {
      std::cout << "You too young for this site\n";
    } else {
      std::cout << "Welcome to the site\n";
      running = false;
    }

  }

  return 0;
}