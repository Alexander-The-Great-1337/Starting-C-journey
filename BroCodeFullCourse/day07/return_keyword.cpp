#include <iostream>

double getSquare(double length);
double getCube(double length);

int main() {
  
  double length;

  std::cout << "Enter a length: ";
  std::cin >> length;

  double area = getSquare(length);
  double cube = getCube(length);

  std::cout << "Area: " << area << "cm^2\n";
  std::cout << "Cube: " << cube << "cm^3\n";

  return 0;
}

double getSquare(double length) {
  return length * length;
}

double getCube(double length) {
  return length * length * length;
}