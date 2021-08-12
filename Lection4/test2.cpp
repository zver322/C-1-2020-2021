#include <iostream>

int main() {
    using std::cout;
    int x = 0xff;

    int* p = &x;

    cout << p << "\n";
    cout << p + 1 << "\n";

    cout << *p << "\n";
    cout << sizeof(p) << "\n";
}