#include <iostream>

class C {
private:
    int x = 0;
    std::string s;
    double d = 0.0; // Размер типа будет равен сумме размеров его полей 
    void add_and_print(int);
public:
    void add_and_print(double a) {
        std::cout << x + a << std::endl;
    }
};

void C::add_and_print(int x) {
    //std::cout << C::x + x << std::endl;
    std::cout << this->x + x << std::endl; // Две идентичные по смыслу записи
}

int main() {
    C c;
    std::cout << sizeof(c) << std::endl; // Занимает 1 байт 
    c.add_and_print(25.0);
    return 0;
}