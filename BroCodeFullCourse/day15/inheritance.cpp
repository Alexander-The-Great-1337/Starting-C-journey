#include <iostream>

class Animal {
  public:
    bool isAlive = true;
  
  void eat() {
    std::cout << "This animal is eating\n";
  }
};

class Dog : public Animal {
  public:
  
  void bark() {
    std::cout << "The dog goes woof!\n";
  }
};

class Cat : public Animal {
  public:

  void meow() {
    std::cout << "The cat goes meow\n";
  }
};

int main() {

  Dog dog1;
  Cat cat1;
  
  std::cout << "Dog:\n";
  std::cout << (dog1.isAlive ? "is alive" : "is not alive") << '\n';
  dog1.eat();
  dog1.bark();
  
  std::cout << "Cat:\n";
  std::cout << (cat1.isAlive ? "is alive" : "is not alive") << '\n';
  cat1.eat();
  cat1.meow();

  return 0;
}