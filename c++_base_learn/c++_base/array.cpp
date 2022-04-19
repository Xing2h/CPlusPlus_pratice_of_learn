//
// Created by Xing on 2022/4/4.
//

#include <iostream>

using namespace std;

int main() {
    // 第一种数组定义方式
    int num1[5];
    // 按数组下标赋值
    num1[0] = 10;
    num1[1] = 20;
    num1[2] = 30;
    num1[3] = 40;
    num1[4] = 50;
    // 按数组下标输出
    for (int i = 0; i < 5; i++) {
        cout << num1[i] << endl;
    }
    // 第二种数组定义方式
    int num2[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << num2[i] << endl;
    }
    // 第三种数组定义方式
    int num3[] = {10, 20, 30};
    for (int i = 0; i < (sizeof(num3)/sizeof(num3[0])); i++) {
        cout << num3[i] << endl;
    }
    return 0;
}