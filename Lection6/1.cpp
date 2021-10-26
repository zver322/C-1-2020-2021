#include <iostream>
#include <algorithm>

int f(double) {
    std::cout << 1 << std::endl;
}

double f(int) {
    std::cout << 2 << std::endl;
}

void f(char a, int b=0) {
    
}

void g(int, int) {
    std::cout << 5 << std::endl;
}

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    double x = f(0.0);
    int y = f(1);

    void (*pg)(int, int) = g;
    pg(1, 2);

    double(*pf)(int) = &f;
    pf(1);

    int a[5] = {100, 2, 33, 445, -5};
    std::sort(a, a+5, cmp);
    for (int i = 0; i < 5; ++i) std::cout << a[i] << std::endl;

}