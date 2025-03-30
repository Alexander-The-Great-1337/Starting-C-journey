#include <iostream>

class Shape {
  public:
    double area;
    double volume;
};

class Cub : public Shape {
  public:
    double side;

  Cub(double side) {
    this->side = side;
    this->area = side * side * 6;
    this->volume = side * side * side;
  }
};


class Sphere : public Shape {
  public:
    double radius;

    Sphere(double radius) {
    this->radius = radius;
    this->area = 4 * 3.14159 * (radius * radius);
    this->volume = (4/3.0) * 3.14159 * (radius * radius * radius);
  }
};

int main()
{
  Cub cube(10);
  Sphere sphere(5.0);

  std::cout << "Cube: \n";
  std::cout << "Area: " << cube.area << "cm\n";
  std::cout << "Volume: " << cube.volume << "cm\n";

  std::cout << "Sphere: \n";
  std::cout << "Area: " << sphere.area << "cm\n";
  std::cout << "Volume: " << sphere.volume << "cm\n";


  return 0;
}