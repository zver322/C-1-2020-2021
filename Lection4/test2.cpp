#include <iostream>

int main() {
    int x = 5;
    int* p = &x;

    std::cout << *p << "\n";
    std::cout << sizeof(p) << "\n";
}