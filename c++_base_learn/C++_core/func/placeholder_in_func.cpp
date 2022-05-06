/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;

//占位参数
//语法：返回值类型 函数名 (数据类型) {}

//目前用不到占位参数
//占位参数还可以有默认参数
void func1(int a, int) {
    cout << "*****************" << endl;
}

void func2(int a, int = 10) {
    cout << "*******" << endl;
}

int main() {
    func1(10, 20);
    func2(10);
    return 0;
}
