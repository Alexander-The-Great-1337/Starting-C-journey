#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string String;
typedef int Number;

using String = std::string;
using Number = int;

int main() {

    pairlist_t pairlist;

    String name = "Alexander";

    Number age = 34;

    std::cout << "My name is " << name << " Im " << age << " Years old.";

    return 0;
}