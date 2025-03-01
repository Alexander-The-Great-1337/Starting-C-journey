#include <iostream>

using namespace std;

int main () {

    // integers
    int x = 10;
    int y = 20;

    //double
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    //single character
    char grade = 'A';
    char initial = 'C';
    char dollarSign = '$';

    //bool
    bool isStudent = true;
    bool isChad = true;
    bool isPoor = false;

    cout << "Enter a day and a food: ";
    string day;
    string food;

    cin >> day >> food;

    //string
    string name = "Alexander";

    cout << day << " I was eating " << food;
    
    return 0;
}   