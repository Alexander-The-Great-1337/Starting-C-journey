#include <iostream>


int main() {

  // int number;

  // do  {
  //   std::cout << "Enter a positive #: ";
  //   std::cin >> number;


  // } while (number < 0);
  

  // std::cout << "The # is: " << number;

  int age;

  do {
    std::cout << "What is your age: ";
    std::cin >> age;

    age < 18 ? std::cout << "You too young for this website\n" :
      std::cout << "Welcome to the website\n";
    
  } while(age < 18);
  
  
 

  return 0;
}