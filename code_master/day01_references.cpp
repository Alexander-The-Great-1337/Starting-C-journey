#include <iostream>

using namespace std;

int main() {

  /*Reference different from pointers can't not be changed
    Reference are identified by & */

    int number1 = 10;
    int number2 = 20;

    int& numberRef = number1;

    numberRef = number2;

    cout << number1 << '\n'  << number2 << '\n'   << numberRef << '\n';

  cin.get();
  return 0;
}