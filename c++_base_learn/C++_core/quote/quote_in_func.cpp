/***************************
 * @Author Xing
 * @Date 2022/5/5
 **************************/
#include<iostream>

using namespace std;

//交换函数
//1、值传递
void swap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//2、地址传递
void swap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3、引用传递
void swap03(int &a1, int &b1) {
    int temp = a1;
    a1 = b1;
    b1 = temp;
}

int main() {
    int a = 10;
    int b = 20;
    cout << "**********值传递**********" << endl;
    cout << "交换前：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    swap01(a, b);
    cout << "交换后：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    cout << "**********地址传递**********" << endl;
    cout << "交换前：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    swap02(&a, &b);
    cout << "交换后：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    cout << "**********引用传递**********" << endl;
    cout << "交换前：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    swap03(a, b);
    cout << "交换后：" << endl;
    cout << "a:" << a << " b:" << b << endl;
    return 0;
}
