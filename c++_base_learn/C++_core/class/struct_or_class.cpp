/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;

struct C1 {
    int m_a;

    void toString() {
        cout << "struct m_a:" << m_a << endl;
    }
};

class C2 {
    int m_a;
};

int main() {
    //struct和class区别
    //struct默认权限是公共 public
    //class 默认权限是私有 private
    C1 c1;
    c1.m_a = 10;//在struct默认的权限为公共，因此可以访问
    C2 c2;
    //c2.m_a = 11;//在class默认的权限为私有，因此不可以访问
    return 0;
}
