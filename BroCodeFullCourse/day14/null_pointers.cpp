#include <iostream>


int main() {

  int *pointer = nullptr;
  int x = 131;

  // pointer = &x;

  if(pointer == nullptr) {
    std::cout << "Address was not assigned\n";
    std::cout << *pointer << '\n';
  } else {
    std::cout << "Address was assigned\n";
  }

  return 0;
}