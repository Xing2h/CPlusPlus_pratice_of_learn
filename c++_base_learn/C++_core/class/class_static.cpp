/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

/**
 * 1、所有对象都共享同一份数据
 * 2、编译阶段就分配内存
 * 3、类内声明，类外初始化
 */
class Person {
public:
    static int m_Age;

private:
    static int m_B;
};

int Person::m_Age = 100;
int Person::m_B = 1111;

void test01() {
    Person p;
    cout << p.m_Age << endl;//100
    Person p2;
    p2.m_Age = 200;
    cout << p2.m_Age << endl;//200
    cout << p.m_Age << endl;//200
}

void test02() {
    //静态成员不属于某一个对象上，所有对象都共享同一份数据
    //因此静态对象有两种访问方式：
    //1、通过对象进行访问
    Person p;
    cout << p.m_Age << endl;
    p.m_Age = 200;
    //2、通过类名进行访问
    cout << Person::m_Age << endl;
    //静态成员变量的访问权限
    //cout << Person::m_B << endl;//m_B为private权限，类外不可访问

}

int main() {
    test02();
    return 0;
}
