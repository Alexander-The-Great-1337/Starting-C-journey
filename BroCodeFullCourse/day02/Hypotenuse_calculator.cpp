#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double a;
  double b;
  double c;

  cout << "Digit side A: ";
  cin >> a;

  cout << "Digit side B: ";
  cin >> b;

  c = sqrt(pow(a, 2) + pow(b, 2));

  cout << "side C: " << c << "\n";


  return 0;
}