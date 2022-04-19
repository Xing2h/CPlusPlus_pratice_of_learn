//
// Created by Xing on 2022/4/8.
//

#include<iostream>

using namespace std;

int main() {
    // 定义整型变量a
    int a = 10;
    //定义指针
    int *p;
    // 指针变量赋值
    p = &a;// 指针变量只想a的地址
    // 通过*操作指针变量指向的内存
    cout << "*p=" << *p << endl;
    cout << "p=" << p << endl;
    cout << "a的地址为=" << &a << endl;
    return 0;
}