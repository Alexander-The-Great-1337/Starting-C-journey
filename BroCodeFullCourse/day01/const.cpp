#include <iostream>
#include <cmath>

using namespace std;

int main () {
    const double PI = M_PI;

    cout << "Enter a radius: ";
    double radius;
    cin >> radius;

    double area = PI * pow(radius, 2);

    cout << "Area: " << area << "\n";
 
    return 0;
}