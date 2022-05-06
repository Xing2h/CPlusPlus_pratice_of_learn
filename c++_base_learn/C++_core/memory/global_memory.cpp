//
// Created by Xing on 2022/4/18.
//

#include<iostream>

using namespace std;
// 全局变量
int g_a = 10;
int g_b = 10;
// const 修饰的全局变量
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
    // 局部变量
    int a = 10;
    int b = 10;
    cout << "局部变量a的地址为：\t\t" << &a << endl;
    cout << "局部变量b的地址为：\t\t" << &b << endl;
    // 全局变量
    cout << "全局变量g_a的地址为：\t" << &g_a << endl;
    cout << "全局变量g_b的地址为：\t" << &g_b << endl;
    // 静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout << "静态变量s_a的地址为：\t" << &s_a << endl;
    cout << "静态变量s_b的地址为：\t" << &s_b << endl;
    //常量
    // 字符串常量
    cout << "字符串常量的地址为：\t" << &"Hello" << endl;
    cout << "字符串常量的地址为：\t" << &"World！" << endl;
    // const 修饰的局部变量
    const int c_l_a = 10;
    const int c_l_b = 10;
    cout << "const修饰的局部变量c_l_a的地址为：\t" << &c_l_a << endl;
    cout << "const修饰的局部变量c_l_b的地址为：\t" << &c_l_b << endl;
    // const 修饰的全局变量
    cout << "const修饰的全局变量c_l_b的地址为：\t" << &c_g_a << endl;
    cout << "const修饰的全局变量c_l_b的地址为：\t" << &c_g_b << endl;
    return 0;
}