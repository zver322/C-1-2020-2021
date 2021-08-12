#include <iostream>

int main() {
    using std::cout;
    double x = 3.14;

    double* p = &x;

    cout << p << "\n";
    cout << p + 1 << "\n";

    cout << *p << "\n";
    cout << sizeof(p) << "\n";
}