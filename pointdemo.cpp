//
// Created by xudazhou on 2018/10/30.
//

#include <iostream>

using namespace std;

int main()
{
    int var1;
    cout << &var1 << endl;
    int *p;
    p = &var1;
    cout << p << endl;
    p++;
    cout << p << endl;

    long c1 = 1L;
    long *p2;
    p2 = &c1;
    cout << p2 << endl;
    p2++;
    cout << p2 << endl;
}
