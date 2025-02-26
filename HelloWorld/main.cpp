#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    const short maxValue = 6;
    const short minValue = 1;

    const int num1 = (rand()  % (maxValue - minValue + 1)) + minValue;
    const int num2 = (rand()  % (maxValue - minValue + 1)) + minValue;

    cout << "num 1: " << num1 << " num 2: " << num2 << endl;
    return 0;
}