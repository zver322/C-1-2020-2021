#include <iostream>

int x = 0;
namespace N {
    int y;
}

class C {
    int x; //local variables
};

namespace N {   
    // y will be seen here again. It is her scope
}

int main() {
    int x = 4;
    using std::cout;
    cout << ::x; // Using this construction we can call x as a global variable
    cout << N::y; // Example of calling variable from namespace
    {
        int x = 5;
        cout << x;
    }
    cout << x;
}