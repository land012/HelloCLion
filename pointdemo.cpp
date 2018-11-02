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

    char c2 = 'a';
    char* p3;
    p3 = &c2;
    cout << &c2 << endl; // a<特殊符号>
    cout << p3 << endl; // a<特殊符号>
    cout << *p3 << endl; // a
    cout << (int *)p3 << endl; // 0x7ffe02817c0f

    cout << "========================= char arr =========================" << endl;
    char arr1[] = "hello";
    char* p4;
    p4 = arr1;
    cout << p4 << endl; // hello
    cout << *p4 << endl; // h
    cout << (int *)p4 << endl; // 0x7ffd221628b0
    p4++;
    cout << p4 << endl; // ello
    cout << (int *)p4 << endl; // 0x7ffd221628b1
}
