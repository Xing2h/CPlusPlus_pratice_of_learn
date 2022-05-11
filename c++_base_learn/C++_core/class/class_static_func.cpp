/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

class Person {
public:
    static void func() {
        m_A = 199;//静态成员函数可以调用静态成员变量
        //m_B = 200;//静态成员函数不可以调用非静态成员变量，无法区分到底是哪个对象的m_B
        cout << "调用静态成员函数" << endl;
    }

private:
    static void func2() {
        cout << "static void func2() 的调用" << endl;
    }

public:
    static int m_A;
    int m_B;
};

int Person::m_A = 100;

void test01() {
    //通过对象进行访问
    Person p;
    p.func();
    //通过类名进行访问
    Person::func();
    cout << Person::m_A << endl;
    //Person::func2();//类外访问不到私有的静态成员函数
}

int main() {
    test01();
    return 0;
}
