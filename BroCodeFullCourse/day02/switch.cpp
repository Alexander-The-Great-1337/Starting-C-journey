#include <iostream>

int main() {

  // int age;

  // std::cout << "Hello World" << "\n";
  // std::cout << "Enter a age: ";
  // std::cin >> age;

  // switch(age) {
  //   case 18:
  //     std::cout << "You can drive your age is " << age  << "\n";
  //     break;
  //   case 17:
  //     std::cout << "You can't drive your age is " << age  << "\n";
  //     break;
  // } 
  char grade;

  std::cout << "Enter your grade (A-F): ";
  std::cin >> grade;


  switch (grade)
  {
  case 'A':
    std::cout << "You did excelent";
    break;
  case 'B':
    std::cout << "You did pretty good";
    break;
  case 'C':
    std::cout << "You did good";
    break;
  case 'D':
    std::cout << "You did not so good";
    break;
  case 'F':
    std::cout << "YOU FAILED!";
    break;
  
  default:
    std::cout << "Please type a grande between (A-F)";
  }

  return 0;
}