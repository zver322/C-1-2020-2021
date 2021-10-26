#include <iostream>

int f(double) {
    std::cout << 1;
}

double f(int) {
    std::cout << 2;
}

int main() {
    double x = f(0.0);
    int y = f(1);
}