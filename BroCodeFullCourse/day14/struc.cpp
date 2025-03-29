#include <iostream>

struct student
{
  std::string name;
  double gpa;
  bool isEnrolled;
};

int main()
{
  student student1;

  student1.name = "Alexander";
  student1.gpa = 9.5;
  student1.isEnrolled = true;

  std::cout << "The student " << student1.name << " has gpa " << student1.gpa << (student1.isEnrolled ? " is enrolled" : " is not enrolled") << '\n';

  return 0;
}