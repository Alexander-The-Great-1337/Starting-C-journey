#include <iostream>

int main() {
  
  std::cout << "Hello String!\n";

  std::string name;

  std::cout << "Enter your name: ";
  std::getline(std::cin, name);

  // if (name.length() > 12) {
  //   std::cout << "Your name can't be over 12 characters" << "\n";
  // } else {
  //   std::cout << "Welcome " << name << "\n";
  // }

  // if (name.empty()) {
  //   std::cout << "You didn't enter your name";
  // } else {
  //   std::cout << "Hello " << name;
  // }

  // name.clear();

  // name.append("@gmail.com");


  // std::cout << "Hello " << name.at(5) << "\n";

  // name.erase(0, 3);
  // name.insert(0, "@");

  // std::cout << "Hello " << name;

  std::cout << name.erase(name.find(' '), 1);


  return 0;
}