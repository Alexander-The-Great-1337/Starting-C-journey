#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Fahrenheit to Celsius" << endl;

    cout << "Digit a value in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;

    cout << "Celsius: " << fixed << setprecision(2) << celsius << endl;

    return 0;
}