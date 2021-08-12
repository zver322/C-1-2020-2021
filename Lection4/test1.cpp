#include <iostream>
#include <string>

int main() {
    std::string s = "abc";
    std::string ss = "abcde";
    std::cout << (2 < 3 ? s : ss).size() << "\n";

    int x = 0;
    double y = 1.0;
    std::cout << (2 < 3 ? x : y) << "\n";

    2 < 3 ? std::cout << x : std::cout << s;

    ++x = x++;
    std::cout << "\n" << x << "\n";

    (2 < 3 ? ++x : x++);

    
}