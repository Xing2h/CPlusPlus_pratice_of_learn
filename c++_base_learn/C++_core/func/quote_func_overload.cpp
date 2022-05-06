/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;

//1、引用作为重载的条件
void func(int &a) {
    cout << "func(int &a)调用" << endl;
}

void func(const int &b) {
    cout << "const func(int &b)调用" << endl;
}

//2、函数重载碰到默认参数
void func1(int a, int b = 10) {
    cout << "func(int a)调用" << endl;
}

void func1(int a) {
    cout << "func(int a = 10)调用" << endl;
}

int main() {
    int a = 10;
    func(a);//调用无const
    const int b = 10;
    func(b);//调用有const
    func(1);//调用有const

    //func1(10);//碰到默认参数产生歧义，需要避免
    return 0;
}
