//
// Created by Xing on 2022/4/8.
//

#ifndef C___BASE_LEARN_SWAP_H
#define C___BASE_LEARN_SWAP_H

#endif //C___BASE_LEARN_SWAP_H
#include<iostream>
using namespace std;
void swap(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后：" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
}