/***************************
 * @Author Xing
 * @Date 2022/5/5
 **************************/
#include<iostream>

using namespace std;

void test01() {
    //引用基本语法
    //数据类型 &别名 = 原名;
    int a = 10;
    cout << a << endl;
    // 创建引用
    int &b = a;// 变量b指向变量a的地址
    cout << b << endl;
    b = 20;
    cout << a << endl;
}

void test02() {
    int a = 10;
    cout << "a:" << a << endl;
    //int &b //错误的,必须初始化
    int &c = a;
    cout << "c:" << c << endl;
    c = 100;
    cout << "a:" << a << endl;
    cout << "c:" << c << endl;
    int d = 20;
    cout << "d:" << d << endl;
    //int &c = d;//错误的，引用不能改变
    c = d; //这是赋值操作，不是更改引用
    cout << "c:" << c << endl;
    d = 22;
    cout << "d:" << d << endl;
    cout << "c:" << c << endl;

}

int main() {
    //test01();
    test02();
    return 0;
}
