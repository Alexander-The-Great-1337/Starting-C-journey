#include <iostream>

int main() {

  int *pNum = NULL;
  
  pNum = new int;

  *pNum = 21;

  std::cout << "Adress: " << pNum << '\n';
  std::cout << "Value: " << *pNum << '\n';

  delete pNum;

  return 0;
}