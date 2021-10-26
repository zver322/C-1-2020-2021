#include <iostream>
#include <vector>
#include <algorithm>

size_t find(const std::string& text, const std::string& str) {
    // ...
    return 0;
}

int main() {
    const int x = 0;

    const std::vector<int> v = {1, 2, 3, 4, 5};
    //std::sort(v.begin(), v.end()); // Ошибка компиляции

    int y = 1;
    //(3 > 2 ? x : y) = 5; // Нескомпилируется, так как это неконстантный метод. 

    const int* p = &x; // Нельзя менять на то, что ссылаешься 
    ++p;
    //*p = 1;

    int* const pp = &y; // Нельяз менять сам указатель
    //++pp;
    *pp = 1;

    const int* const ppp = &y; // Вообще нельзя поменять


    //int& rx = x; так нельзя О
    const int& rx = x;
    const int& ry = y;
    //int& const rry = y; - ce. Ссылки сами по себе константны. 

    //++ry
    ++y;
    std::cout << y << std::endl;


    return 0;
}