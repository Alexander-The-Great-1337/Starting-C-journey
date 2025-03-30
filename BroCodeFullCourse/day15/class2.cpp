#include <iostream>

class Car {
  public:
    std::string color;
    std::string model;
    std::string make;
    int year;

    void acelerate() {
      std::cout << "You step on the gas!\n";
    }
    void brake() {
      std::cout << "You step on the breaks!\n";
    }

};

int main() {

  Car car1;

  car1.make = "Ford";
  car1.model = "Mustang";
  car1.year =  2023;
  car1.color = "Silver";

  std::cout << car1.make << '\n';
  std::cout << car1.model << '\n';
  std::cout << car1.year << '\n';
  std::cout << car1.color << '\n';

  car1.acelerate();
  car1.brake();

  return 0;
}