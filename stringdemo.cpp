//
// Created by xudazhou on 2018/10/8.
//

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char str1[] = "hello";
    cout << str1 << endl;
    cout << strlen(str1) << endl; // 5
    cout << sizeof(str1) << endl; // 6

    string str2 = "world";
    cout << str2.length() << endl; // 5
    cout << str2.size() << endl; // 5
    cout << sizeof(str2) << endl; // 8

    return 0;
}