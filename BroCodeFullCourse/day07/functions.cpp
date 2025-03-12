#include <iostream>

void happyBirthDay(std::string name, int age);

int main() {
  std::string name;
  int age;

  std::cout << "Enter name: ";
  std::getline(std::cin, name);

  std::cout << "Enter your age: ";
  std::cin >> age;


  happyBirthDay(name, age);

  return 0;
}

void happyBirthDay(std::string name, int age) {
  std::cout << "Happy Birth to " << name << '\n';
  std::cout << "Happy Birth to " << name << '\n';
  std::cout << "Happy Birth dear " << name << '\n';
  std::cout << "Happy Birth to " << name << '\n' << '\n';
  std::cout << "You are age " << age << " Years old" << '\n';
}