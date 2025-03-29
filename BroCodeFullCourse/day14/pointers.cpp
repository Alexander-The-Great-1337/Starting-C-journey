#include <iostream>

int main() {

  std::cout << "Create ma man!\n";

  std::string name = "Alexander";
  int age = 34;
  std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};


  //First we pass the reference of the vaiable to the pointer using &
  std::string *pName = &name;
  int *pAge = &age;

  //When it comes to arrays we dont need to use & operator to its memory alocated reference
  std::string *pFreePizzas = freePizzas;

  //Running the program without * it should show 0x7fff9c617b20 0x7fff9c617b04 that represents
  //The adress of the vaiable in memory. using *pName for example you are refering to the proper value
  std::cout << *pName << '\n';
  std::cout << pAge << '\n';
  std::cout << *pFreePizzas << '\n';

  return 0;
}