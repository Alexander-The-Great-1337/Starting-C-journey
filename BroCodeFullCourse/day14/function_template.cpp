#include <iostream>

template <typename T, typename U>

auto max(U x, T y)
{
  return (x > y) ? x : y;
}

int main()
{

  std::cout << max(90, 400.2) << '\n';

  return 0;
}