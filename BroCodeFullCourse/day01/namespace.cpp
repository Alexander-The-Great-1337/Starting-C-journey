#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

namespace std {
    int x = 4;
}

int main() {
    using std::cout;
    using std::string;

    using namespace second;

    string name = "Ale";

    cout << first::x << "\n";
    cout << name << "\n";

    return 0;
}