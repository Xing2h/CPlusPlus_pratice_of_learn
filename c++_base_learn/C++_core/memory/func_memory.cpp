//
// Created by Xing on 2022/4/18.
//

#include<iostream>

using namespace std;

int *func() {
    int a = 10;
    int *b = &a;
    return b;
}

int main() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}