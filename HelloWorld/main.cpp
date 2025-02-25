#include <iostream>

using namespace std;

int main() {
    const int sales = 95000;
    const int stateTax = sales * 4 / 100;
    const int countyTax = sales * 2 / 100;
    const int totalTax = stateTax + countyTax;
    cout << "sales = $" << sales << endl << "state tax = $" << stateTax << endl
              << "county tax = $" << countyTax << endl << "total tax = $" << totalTax << endl;
    return 0;
}