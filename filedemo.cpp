//
// Created by xudazhou on 2018/11/2.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string temp;
    fstream fin;
    fin.open("preprocess_feature_list.conf", ios::in);
    while(getline(fin, temp)) {
        cout << temp << endl;
    }
    return 0;
}
