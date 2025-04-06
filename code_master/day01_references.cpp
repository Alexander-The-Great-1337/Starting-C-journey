#include <iostream>

using namespace std;

int main() {

  /*Reference different from pointers can't not be changed
    Reference are identified by & (ampersand) and poitners by * (asterisk) */

    int number1 = 10;
    int number2 = 20;

    int& numberRef = number1;

    numberRef = number2;

    int* numberPtr = &number1;

    *numberPtr = number2;

    cout << number1 << '\n'  << number2 << '\n'   << numberRef << '\n' << *numberPtr << '\n';

  /*
    The output of this program is 20,20,20 because when we set a reference to number1
    numberRef is now pointing to the space in memory of number1 so when we change numberRef
    by attribuating number2 to it we know that number1 is now 20 because numberRef is pointing direct to it
  */
  return 0;
}