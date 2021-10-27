#include <iostream>

int main() {
    int x = 3;
    double d = (double) x; // С - style
    // 2.7.1 Static cast
    double c = static_cast<double>(x);
    // 2.7.2 Reinterpret cast
    std::cout <<  *reinterpret_cast<double*>(&x) << std::endl;
    // Были байты кодирующие тройку, был приведен казатель на double на эти байты, а затем разыменован. Эффект как будто посмотрел, что под
    // ним лежит double. 
    //std::cout <<  *static_cast<double*>(&x) << std::endl; // Нельзя
    


    return 0;
}