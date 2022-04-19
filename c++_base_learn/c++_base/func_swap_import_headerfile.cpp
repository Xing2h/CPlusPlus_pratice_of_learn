//
// Created by Xing on 2022/4/8.
//

#include<iostream>
#include "headfiles/swap.h"

using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << "交换前实参：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    swap(num1, num2);
    cout << "交换后实参：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    return 0;
}