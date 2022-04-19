//
// Created by Xing on 2022/4/9.
//

#include<iostream>

using namespace std;

int swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "初始值：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    // 值传递
    swap(a, b);
    cout << "值传递后：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    // 地址传递
    swap(&a, &b);
    cout << "地址传递后：" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "&a=" << &a << endl;
    cout << "&b=" << &b << endl;
    return 0;
}