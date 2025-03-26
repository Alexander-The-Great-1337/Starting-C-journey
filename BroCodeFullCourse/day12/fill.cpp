#include <iostream>

using namespace std;

int main() {

  const int SIZE = 6;

  string foods[SIZE];

  fill(foods, foods + (SIZE/3), "Pizza");
  fill(foods + (SIZE/3), foods + (SIZE/3) * 2, "Hamburguer");
  fill(foods + (SIZE/3) * 2, foods + SIZE, "HotDog");

  for(string f : foods) {
    cout << f << '\n';
  }


  return 0;
}