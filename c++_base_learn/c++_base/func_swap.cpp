//
// Created by Xing on 2022/4/8.
//

#include<iostream>

using namespace std;

//定义函数
void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
}

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