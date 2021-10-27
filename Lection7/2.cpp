#include <iostream>

struct D {
private:
    int x = 0;
    std::string s;
    double d = 0.0; // Размер типа будет равен сумме размеров его полей 
public:
    void add_and_print(int a) {
        std::cout << x + a << std::endl;
    }
};

class C {
    private:
    int x = 0;
    std::string s;
    double d = 0.0; // Размер типа будет равен сумме размеров его полей 
    void add_and_print(int a) {
        std::cout << x + a << std::endl;
    }
public:
    void add_and_print(double a) {
        std::cout << x + a << std::endl;
    }
};

int main() {
    C c;
    D d;
    std::cout << sizeof(c) << std::endl; // Занимает 1 байт 
    std::cout << sizeof(d) << std::endl; // Занимает 48 байт, равен сумме полей. Было произведено округление.
    // c.x = 0; - так нельзя. Данное поле приватн 
    c.add_and_print(25);
    return 0;
}