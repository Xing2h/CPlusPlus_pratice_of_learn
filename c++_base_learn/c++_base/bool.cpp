//
// Created by Xing on 2022/3/31.
//
#include<iostream>
using namespace std;

int main(){
    bool flag = true;
    cout << flag << endl; // 1
    flag = false;
    cout << flag <<endl; // 0

    cout << "布尔类型大小：" << sizeof(bool) << endl; // 1
    return 0;
}