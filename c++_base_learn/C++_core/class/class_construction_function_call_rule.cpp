/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

//构造函数调用规则
//1、没有构造参数，编译器会提供默认构造参数和拷贝参数
//2、没有无参构造，有有参构造，编译器不会提供无参构造
//3、没有普通构造，有拷贝构造，编译器提供无参构造
class Person {
public:
    int m_Age;

    //构造函数
    //无参构造
    Person() {
        cout << "执行无参构造函数" << endl;
    }

    //有参构造
    Person(int age) {
        m_Age = age;
        cout << "执行有参构造函数" << endl;
    }

    //拷贝构造
    //Person(const Person &p) {
    //    m_Age = p.m_Age;
    //    cout << "执行拷贝构造函数" << endl;
    //}

    //析构函数
    ~Person() {
        cout << "执行析构函数" << endl;
    }
};

void test01() {
    Person p1;
    p1.m_Age = 19;
    Person p2(10);
    Person p3(p1);

    cout << "p3的年龄：" << p3.m_Age << endl;
}

void test02(){
    Person p;
}
int main() {
    //test01();
    return 0;
}
