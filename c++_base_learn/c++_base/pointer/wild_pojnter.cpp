//
// Created by Xing on 2022/4/9.
//

#include<iostream>

using namespace std;

int main() {
    int *p = (int *) 0x1100;
    // 访问野指针报错
    cout << *p << endl;
    return 0;
}