#include <iostream>

using namespace std;

int main() {

  // string car[10];

  // car[0] = "Camaro";
  // car[1] = "Ferrari";
  // car[2] = "Mustang";

  // for(string c : car) {
  //   cout << c << "\n";
  // }

  // double prices[] = { 5.00, 7.50, 9.99, 15.00 };

  // for(double p : prices) {
  //   cout << p << "\n";
  // }

  //Sizeof() = determines the size in byes of a: variable, data type, class, objects, etc.

  int i = 256;
  double d = 256.5;
  string s = "Alexander";
  bool b = true;
  char c = 'A';
  string a[] = {"Aaaaa", "Bbbbb", "Cccc", "Dddd"};

  cout << sizeof(b) << " Boolean bytes\n";
  cout << sizeof(i) << " Integer bytes\n";
  cout << sizeof(d) << " Double bytes\n";
  cout << sizeof(s) << " String bytes\n";
  cout << sizeof(c) << " Character bytes\n";
  cout << sizeof(a) << " Array bytes\n";

  cout << sizeof(a)/sizeof(string) << "\n";

  return 0;
}