#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string animes[] = {
      "Naturo",
      "One piece",
      "Deathnote",
      "Overlord",
      "Dragon ball",
  };

  int numbers[] = {
      1,
      5,
      42,
      1337,
      10,
      2,
      3,
  };

  sort(numbers, numbers + sizeof(numbers) / sizeof(numbers[0]), greater<int>());

  sort(animes, animes + sizeof(animes) / sizeof(animes[0]), greater<string>());

  cout << "Sorted Numbers:\n";
  for (int n : numbers)
  {
    cout << n << '\n';
  }

  cout << "\nSorted Animes:\n";
  for (const string &s : animes)
  {
    cout << s << '\n';
  }

  return 0;
}