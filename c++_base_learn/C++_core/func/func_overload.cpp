/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;
//函数重载
//可以让函数名相同，提高复用性

//函数重载满足条件:
//1、在同一个作用域下
//2、函数名称相同
//3、函数参数类型不同 or 个数不同 or (参数类型)顺序不同
void func() {
    cout << "*" << endl;
}

void func(int a) {
    cout << "**" << endl;
}

void func(char a) {
    cout << "***" << endl;
}

void func(int a, char b) {
    cout << "****" << endl;
}

void func(char b, int a) {
    cout << "*****" << endl;
}

int main() {
    func();
    func(1);
    func('a');
    func(1, 'c');
    func('c', 1);
    return 0;
}
