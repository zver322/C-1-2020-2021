#include <iostream>
#include <string>

int main() {
    std::string s = "abc";
    std::string ss = "abcde";
    std::cout << (2 < 3 ? s : ss).size();

    int x = 0;
    double y = 1.0;
    std::cout << (2 < 3 ? x : y);

    2 < 3 ? std::cout << x : std::cout << s;
}