//
// Created by Xing on 2022/4/8.
//

#include<iostream>

using namespace std;

// 定义函数
int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    // main 函数中调用 add() 函数
    int sum = add(num1, num2);
    cout << num1 << "+" << num2 << "=" << sum << endl;
    return 0;
}