#include <iostream>

using namespace std;


int main () {
    
    cout << "Hello World!" << "\n";

    double x = (int) 3.14;

    cout << x << "\n";

    double y = (char) 42;

    cout << (char) 42 << "\n";

    int correct = 8;
    int question = 10;

    double score = correct / (double) question * 100;


    cout << score << "%" << "\n";

    return 0;
}