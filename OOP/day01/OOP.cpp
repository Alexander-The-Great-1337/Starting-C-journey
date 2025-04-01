#include <iostream>

using std::cout;
using std::string;

class Employee
{
private:
  string Name;
  string Company;
  int Age;

public:
  Employee(const string& Name, const string& Company, int Age) {
    setName(Name);
    setCompany(Company);
    setAge(Age);
  }
  string getName() {
    return this->Name;
  }
  string getCompany() {
    return this->Company;
  }
  int getAge() {
    return this->Age;
  }
  void setName(const string& value) {
    this->Name = value;
  }

  void setCompany(const string& value) {
    this->Company = value;
  }

  void setAge(const int& value) {
    this->Age = value;
  }
  void IntroduceYourself() {
    cout << "Name: " << this->Name << '\n';
    cout << "Company: " << this->Company << '\n';
    cout << "Age: " << this->Age << '\n';
  }
};

int main()
{
  Employee employee1("Alexander", "Blizzard", 37);
  employee1.IntroduceYourself();

  cout << "***************************\n";

  Employee employee2("Betina", "Google", 25);
  employee2.IntroduceYourself();
  
  return 0;
}