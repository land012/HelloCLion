#include <iostream>

using  namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << sizeof(int16_t) << std::endl;  // 2

    short int i1 = 32767;
    short int i2 = 32768;
    short int i3 = 32769;

    cout << i1 << endl; // 32767
    cout << i2 << endl; // -32768
    cout << i3 << endl; // -32768

    cout << max(1, 2) << endl; // 2

    return 0;
}

int max(int i1, int i2) {
    if (i1 > i2)
        return i1;
    else
        return i2;
}