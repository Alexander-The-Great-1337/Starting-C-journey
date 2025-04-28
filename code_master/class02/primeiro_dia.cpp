#include <iostream>
#include <string>
using namespace std;

class ClassA
{
public:
  ClassA(int i)
  {
    cout << "CREATING A CLASS WITH AN INT I OF " << i << "\n";
  }
};

int GetInt(ClassA cls1 = ClassA(10), string prompt = "Number")
{
  cout << prompt << ": ";
  int result;
  cin >> result;
  cin.ignore();
  return result;
}

int main()
{
  ClassA whoa(20);
  auto age = GetInt(whoa);
  cout << "You are " << age << " years old\n";
  
  cin.get();
  return 0;
}