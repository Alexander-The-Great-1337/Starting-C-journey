#include <iostream>
#include <cmath>

void roll(int dice) {
  
  for(int i = 0; i < dice; i++) {
    std::cout << "Roll " << i + 1 << ": " << (rand() % 100) + 1 << std::endl;
  }
}

int main() {
  srand(time(NULL));

  std::string command;
  int dice;

  while(true) {
    
    std::cout << "How many dices do you want to roll?: ";
    std::cin >> dice;
    
    std::cout << "Enter a comand: ";
    std::cin >> command;
    
    if (command == "/roll") {
      roll(dice);
    }
  }




  return 0;
}

