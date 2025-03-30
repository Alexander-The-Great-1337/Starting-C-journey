#include <iostream>

class Student {
  public:
    std::string name;
    int age;
    double gpa;

    Student(std::string name, int age, double gpa) {
      this->name = name;
      this->age = age;
      this->gpa = gpa;
    }

    Student() {

    }
};
  
class Car {
  public:
    std::string make;
    std::string model;
    int year;
    std::string color;

  Car(
    std::string make,
    std::string model,
    int year,
    std::string color
  ) {
    this->make = make;
    this->model = model;
    this->year = year;
    this->color = color;
  }

  void displayAttributtes() {
    std::cout << "Make: " << make << '\n';
    std::cout << "Model: " << model << '\n';
    std::cout << "Year: " << year << '\n';
    std::cout << "Color: " << color << '\n';
  }
};

int main() {

  std::cout << "Student status: \n"; 
  Student student1("Alex", 34, 9.5);

  std::cout << student1.name << '\n';
  std::cout << student1.age << '\n';
  std::cout << student1.gpa << '\n';

  std::cout << "Car status: \n";
  Car car1("Chevy", "Corvette", 2022, "blue");
  car1.displayAttributtes();
  
  Car car2("BYD", "Dolphin", 2024, "black");
  car2.displayAttributtes();

  Car car3("BYD", "King", 2025, "black");
  car3.displayAttributtes();


  return 0;
}