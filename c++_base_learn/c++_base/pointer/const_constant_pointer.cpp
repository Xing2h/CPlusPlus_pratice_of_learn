//
// Created by Xing on 2022/4/9.
//

#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;
    // 常量指针
    //const int *p = &a;
    //*p = 20;
    //p = &b;

    // 指针常量
    //int * const p = &a;
    //*p = 20;
    //p = &b;

    const int * const p = &a;
    cout << "*p=" << *p <<endl;
    cout << "p=" << p <<endl;
    //*p = 20;
    //p = &b;
    return 0;
}