#include <iostream>

using std::cout;
using std::string;

class AbstractEmployee
{
  virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private:
  string Name;
  string Company;
  int Age;

public:
  Employee(const string &Name, const string &Company, int Age)
  {
    setName(Name);
    setCompany(Company);
    setAge(Age);
  }
  string getName()
  {
    return this->Name;
  }
  string getCompany()
  {
    return this->Company;
  }
  int getAge()
  {
    return this->Age;
  }
  void setName(const string &name)
  {
    this->Name = name;
  }

  void setCompany(const string &company)
  {
    this->Company = company;
  }

  void setAge(const int &age)
  {
    if (age >= 18)
    {
      this->Age = age;
    }
    else
    {
      this->Age = -1;
    }
  }
  void IntroduceYourself()
  {
    cout << "Name: " << this->Name << '\n';
    cout << "Company: " << this->Company << '\n';
    cout << "Age: " << this->Age << '\n';
  }
  void AskForPromotion()
  {
    if (this->Age > 30)
    {
      cout << this->Name << " got promoted!\n";
    }
    else
    {
      cout << this->Name << " sorry no promotion for you!\n";
    }
  }

  virtual void Work() {
    cout << this->getName() << " is checking email, task backlog, performing tasks...\n";
  }
};

class Developer : public Employee
{
private:
  string favProgramLanguage;

public:
  Developer(const string &name, const string &company, int age, string favProgramLanguage)
      : Employee(name, company, age)
  {
    setFavProgramLanguage(favProgramLanguage);
  }

  void setFavProgramLanguage(string favProgramLanguage)
  {
    this->favProgramLanguage = favProgramLanguage;
  }

  void fixBug()
  {
    cout << this->getName() << " Fix bug using " << this->favProgramLanguage << '\n';
  }

  void Work() {
    cout << this->getName() << " is writing " << this->favProgramLanguage << " code\n";
  }
};

class Teacher : public Employee
{
private:
  string Subject;

public:
  Teacher(const string &name, const string &company, int age, string subject)
      : Employee(name, company, age)
  {
    this->Subject = subject;
  }

  void PrepareLesson()
  {
    cout << this->getName() << " is preparing " << this->Subject << " lesson\n";
  }

  void Work() {
    cout << this->getName() << " is teaching " << this->Subject << "\n";
  }
};

int main()
{
  Employee employee1 = Employee("Alexander", "Blizzard", 37);
  employee1.IntroduceYourself();
  employee1.AskForPromotion();

  cout << "***************************\n";

  Employee employee2 = Employee("Betina", "Google", 29);
  employee2.IntroduceYourself();
  employee2.AskForPromotion();

  cout << "***************************\n";

  Developer developer1 = Developer("Alex", "Amazon", 35, "C++");
  developer1.fixBug();
  developer1.IntroduceYourself();
  developer1.AskForPromotion();
  developer1.Work();

  cout << "***************************\n";

  Teacher teacher1 = Teacher("Jack", "Cool School", 20, "History");
  teacher1.IntroduceYourself();
  teacher1.AskForPromotion();
  teacher1.Work();

  cout << "***************************\n";

  Employee* e1 = &developer1;
  Employee* e2 = &teacher1;

  e1->Work();
  e2->Work();

  return 0;
}