#include <iostream>

struct Car
{
  std::string model;
  int year;
  std::string color;
};

void printCar(Car &car);
void paintCar(std::string color, Car &car);

int main()
{
  Car car1;
  Car car2;

  car1.model = "BYD";
  car1.year = 2024;
  car1.color = "Black";

  car2.model = "Ford";
  car2.year = 1995;
  car2.color = "Red";
  
  paintCar("blue", car1);
  paintCar("white", car2);

  printCar(car1);
  printCar(car2);

  return 0;
}

void printCar(Car &car) {
  std::cout << &car << '\n';
  std::cout << car.model << '\n';
  std::cout << car.year << '\n';
  std::cout << car.color << '\n';
}

void paintCar(std::string color, Car &car) {
  car.color = color;
}