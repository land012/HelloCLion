//
// Created by xudazhou on 2018/9/29.
//
#include <iostream>

using namespace std;

void func1(double *arr);
void func2(double *arr);

int main()
{
    double arr1[3];
    double arr2[3] = {1.1, 2.2, 3.3};

    cout << "sizeof(arr2):" << sizeof(arr2) << endl; // 24 数组占用字节数
    func1(arr2); // 8
    func2(arr2); // 8

    cout << arr2[0] << endl; // 1.1
    cout << *arr2 << endl; // 1.1
    cout << *(arr2 + 1) << endl; // 1.1

    cout << "============== point mem addr ==============" << endl;
    double *ptr;
    ptr = arr2;
    cout << ptr[0] << endl; // 1.1
    cout << (int *)ptr << endl; // 0x7ffde7f31e90
    ptr++;
    cout << (int *)ptr << endl; // 0x7ffde7f31e98
}

void func1(double *arr)
{
    cout << "func1:" << sizeof(arr) << endl; // 内存地址 int
}

void func2(double arr[])
{
    cout << "func2:" << sizeof(arr) << endl; // 内存地址 int
}
