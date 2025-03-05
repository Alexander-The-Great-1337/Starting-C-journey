#include <iostream>

int main() {

  char op;

  double num1;
  double num2;
  double result;

  std::cout << "******************CALCULATOR ******************\n";

  std::cout << "Enter a number: ";
  std::cin >> num1;

  std::cout << "Enter another number (cant be zero): ";
  std::cin >> num2;

  std::cout << "Enter either (-, +, *, /): ";
  std::cin >> op;

  switch(op) {
    case '-':
      result = num1 - num2;
    break;

    case '+':
      result = num1 + num2;
      break;
    
    case '*':
      result = num1 * num2;
      break;

    case '/':
      result = num1 / num2;
      break;
    
    default:
      std::cout << "Please Enter one operator (-,+,*,/)" << "\n";
      result = 000000;
      break;
  }

  std::cout << "Result: " << result << "\n";
  
  std::cout << "***********************************************\n";

  return 0;
}