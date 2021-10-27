#include <iostream>

class String {
private:
    char* str = nullptr;
    size_t sz = 0;
public:
    String() = default;

    String(size_t sz, char c='\0') { // Это плохая версия, которую можно улучшить
        this->sz = sz;
        str = new char[sz];
        for (int i = 0; i < sz; ++i) {
            str[i] = c;
        }
    }

    ~String() {
        delete[] str;
        //sz = 0; // Показывает, что вы плохо понимаете плюсы, короче так делать не надо
    }
};

int main() {
    String s(10, 'a');
    String t = 10;
    String z;
    String k = String(25);
    return 0;
}