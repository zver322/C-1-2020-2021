#include <iostream>

void f(const int&x ) {
    std::cout << 1;
}

void f(int& x) {
    std::cout << 2;
}

int main() {
    int x = 3;
    // 2.7.1 Static cast
    double c = static_cast<double>(x);
    // 2.7.2 Reinterpret cast
    double dd = 3.14;
    //std::cout << std::hex << reinterpret_cast<int&>(dd) << std::endl; // std::hex - манипулятор потока, который выводит в 16-ти ричной системе.
    // Также надо ставить &, потому что мы раюотаем с сущ объектами и смотрим на них под други углом. 
    
    //2.7.3 Const cast
    {
        const int cx = 1;

        int &x = const_cast<int&>(cx);
        x = 2; // Это ub
        //std::cout << cx << std::endl;
    }
    {
        int x = 0;
        const int& y = x;
        f(const_cast<const int&>(x)); // Так делать неопасно. Неконстанта кастуется к константе. В обратную сторону опасно.
    }

    // 2.7.4 C-style cast

    {
        int x = 0;
        double d = (double)(x);
    }

    // 2.7.5 Dynamic cast
    


    return 0;
}