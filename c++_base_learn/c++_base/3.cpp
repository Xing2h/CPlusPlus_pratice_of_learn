//
// Created by Xing on 2022/4/2.
//

#include<iostream>

using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "-----------------" << endl;
    cout << "(a>b?a:b):" << (a > b ? a : b) << endl;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "-----------------" << endl;
    cout << "((a>b?a:b)=100):" << ((a > b ? a : b) = 100) << endl;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    return 0;
}