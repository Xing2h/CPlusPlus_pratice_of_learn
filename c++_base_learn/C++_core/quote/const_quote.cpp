/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;

//常量引用
//使用场景：用来修饰形参，防止误操作
void showValue(const int &val) {
    //val = 1000;
    cout << "val=" << val << endl;
}

int main() {

    //int &ref = 10;//引用必须引一块合法的内存空间,这行错误
    //加上const之后，编译器将代码修改
    //int temp = 10; const int &ref = temp;
    //const int &ref = 10;
    //ref = 11;//加入const之后变为只读，不可以修改

    //函数中利用常量引用防止误操作修改实参
    int a = 100;
    showValue(a);
    return 0;
}
