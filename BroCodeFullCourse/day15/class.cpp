#include <iostream>

class Human {
  public:
    std::string name;
    std::string ocupation;
    int age;

    void eat() {
      std::cout << "This person is eating\n";
    }
    void drink() {
      std::cout << "This person is driking\n";
    }
    void sleep() {
      std::cout << "This person is sleeping\n";
    }
};

int main()
{

  Human human1;
  Human human2;

  human1.age = 42;
  human1.name = "Asimov";
  human1.ocupation = "Writer";

  std::cout << human1.name << '\n';
  std::cout << human1.age << '\n';
  std::cout << human1.ocupation << '\n';

  human1.drink();
  human1.eat();
  human1.sleep();
  
  return 0;
}