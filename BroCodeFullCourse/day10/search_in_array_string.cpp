#include <iostream>

int searchFruitIdx(std::string fruits[], int size, std::string myFruit);

int main() {

  std::string fruits[] = {"Dragon fruit", "Apple", "Strawberry", "Mango", "Coconot"};
  int size = sizeof(fruits)/sizeof(fruits[0]);
  std::string myFruit;
  int index;

  std::cout << "Please enter a fruit: ";
  std::getline(std::cin, myFruit);


  index = searchFruitIdx(fruits, size, myFruit);

  if (index != -1) {
    std::cout << myFruit << " is at index " << index << '\n';
  } else {
    std:: cout << myFruit << " is not in the array\n";
  }

  return 0;
}

int searchFruitIdx(std::string fruits[], int size, std::string myFruit) {

  for(int i = 0; i < size; i++) {
    if(fruits[i] == myFruit) {
      return i;
    }
  }
  return -1;
}

