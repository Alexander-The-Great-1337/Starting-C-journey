#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << "Enter radius of a circle: ";
    double radius;
    cin >> radius;
    const double PI = 3.14;
    double area = PI * pow(radius, 2);

    cout << "The area of a circle is: " << area << endl;


    return 0;
}