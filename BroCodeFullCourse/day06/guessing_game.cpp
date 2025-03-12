#include <iostream>

int main() {

  srand(time(NULL));

  int guess;
  int randNum = (rand() % 100) + 1;
  int tries = 0;


  std::cout << "******Welcome to Guessing game******\n";

  do {

    std::cout << "Enter your guess: ";
    std::cin >> guess;

    if (guess > randNum) {
      std::cout << "Too high!\n";
    } else {
      std::cout << "Too low!\n";
    }
    tries++;

  } while(guess != randNum);

  std::cout << "*************************************\n";
  std::cout << "Congratulations You got it right!!\n";
  std::cout << "Number of tries: " << tries << "\n";
  std::cout << "*************************************\n";

  return 0;
}