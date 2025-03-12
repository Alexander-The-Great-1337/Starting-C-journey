#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main() {
  
  std::string pizzaFlavor;
  int flavor;

  std::cout << "How many flavos ? (0,1,2): ";
  std::cin >> flavor;

  std::cout << "What flavor do you like? : ";
  std::getline(std::cin, pizzaFlavor);
  

  bakePizza(pizzaFlavor);

  return 0;
}

void bakePizza() {
  std::cout << "Here is your pizza\n";
}

void bakePizza(std::string topping1) {
  std::cout << "Here is your " << topping1 << " pizza\n";
}

void bakePizza(std::string topping1, std::string topping2) {
  std::cout << "Here is your " << topping1 << " and " << topping2 << '\n';
}