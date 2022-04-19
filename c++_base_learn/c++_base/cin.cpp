//
// Created by Xing on 2022/3/31.
//
#include<iostream>
#include<string>

using namespace std;

int main() {
    //整型数据输入
    int a = 0;
    cout << "a的值为:\t\t" << a << endl;
    cout << "请修改a的值：\t";
    cin >> a ;
    cout << "您输入的值是：\t" << a << endl;
    //浮点型数据输入
    float f = 0.001f;
    cout << "f的值为:\t\t" << f << endl;
    cout << "请修改f的值：\t";
    cin >> f ;
    cout << "您输入的值是：\t" << f << endl;
    //char 型数据输入
    char c = 'a';
    cout << "c的值为:\t\t" << c << endl;
    cout << "请修改c的值：\t";
    cin >> c ;
    cout << "您输入的值是：\t" << c << endl;
    //字符串类型数据输入
    string str = "abcd";
    cout << "str的值为:\t\t" << str << endl;
    cout << "请修改str的值：\t";
    cin >> str ;
    cout << "您输入的值是：\t" << str << endl;
    //bool 型数据输入
    bool flag = true;
    cout << "flag的值为:\t\t" << flag << endl;
    cout << "请修改flag的值：\t";
    cin >> flag ;
    cout << "您输入的值是：\t" << flag << endl;
    return 0;
}
