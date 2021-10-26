#include <iostream>
#include <vector>

void swap(int& x, int& y) { // Без & ничего не поменяется. Мы будем работать с копиями
    int t = x;
    x = y;
    y = t;
}

int& bad(int x) { // Так писать нельзя, потому что ссылка будет ссылаться на несуществующий объект. 
                  // Dangling reference - понятие, когда ссылка существует дольше, чем объект, на который сслаются
    ++x;
    return x;
}

int main() {
    using std::vector;

    vector<int> v = {1, 2, 3, 4, 5};
    { // 
        vector<int> vv = v;
        vv[0] = 0;
    }
    //std::cout << v[0] << std::endl;

    int x = 0;
    int& y = x;
    ++y;

    int z = 10;
    y = z;
    //std::cout << sizeof(y) << std::endl; // Выведется 4, потому что она покажет размер x.

    int& t = y;

    int z = bad(0);

    return 0;
}