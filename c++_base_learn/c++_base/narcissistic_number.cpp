//
// Created by Xing on 2022/4/4.
//
#include<iostream>

using namespace std;

int main() {
    int i = 100;// 初始值
    do {
        int gw = i % 10;// 获取个位数
        int sw = i / 10 % 10;//获取十位数
        int bw = i / 100; //获取百位数
        if ((gw * gw * gw + sw * sw * sw + bw * bw * bw) == i) {
            cout << i << endl;
        }
        i++;
    } while (i < 1000);
    return 0;
}
