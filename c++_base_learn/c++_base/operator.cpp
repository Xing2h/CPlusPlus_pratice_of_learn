//
// Created by Xing on 2022/3/30.
//
#include<iostream>
using namespace std;

int main(){
    int a,b;
    a = 5;
    b = 2;
    cout << "a=" << a << ";b=" << b << endl;
    //四则运算
    cout << "a+b=" << a+b <<endl;
    cout << "a-b=" << a-b <<endl;
    cout << "a*b=" << a*b <<endl;
    cout << "a/b=" << a/b <<endl;
    //取模
    cout << "a%b=" << a%b << endl;
    cout << "---------------------------" << endl;
    //前置自增
    a = 2;
    cout << "a=" << a << endl;
    b = ++a;
    cout << "a=" << a << endl;
    cout << "++a=" << b << endl;
    //后置自增
    a = 2;
    cout << "a=" << a << endl;
    b = a++;
    cout << "a=" << a << endl;
    cout << "a++=" << b << endl;
    //前置自减
    a = 2;
    cout << "a=" << a << endl;
    b = --a;
    cout << "a=" << a << endl;
    cout << "--a=" << b << endl;
    //后置自减
    a = 2;
    cout << "a=" << a << endl;
    b = a--;
    cout << "a=" << a << endl;
    cout << "a--=" << b << endl;
    //浮点数相除
    double d1 = 3.3;
    double d2 = 1.111;
    cout << d1 / d2 << endl;
    return 0;
}
