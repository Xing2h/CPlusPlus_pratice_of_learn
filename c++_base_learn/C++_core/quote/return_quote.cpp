/***************************
 * @Author Xing
 * @Date 2022/5/5
 **************************/
#include<iostream>

using namespace std;

//返回局部变量引用
int &test01() {
    int a = 10;
    int &b = a;
    return b;
}

//返回静态变量引用
int &test02() {
    static int a = 10;
    return a;
}

int main() {
    //不能返回局部变量的引用
    int &ref1 = test01();
    cout << ref1 << endl;//第一次结果正确，因为编译器做了保留
    cout << ref1 << endl;//第二次结果错误，因为内存已将释放

    int &ref2 = test02();
    cout << ref2 << endl;
    cout << ref2 << endl;
    //如果函数的返回值是引用，那么这个函数可以作为左值
    test02() = 1000;
    cout << ref2 << endl;
    cout << ref2 << endl;

    int a = 10;
    int *p = &a;
    cout << "*p:" << *p<< " p:" << p << endl;
    return 0;
}
