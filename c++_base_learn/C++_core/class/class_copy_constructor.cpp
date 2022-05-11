/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

class Person {
public:
    int m_Age;

    //构造函数
    //无参构造
    Person() {
        cout << "Person调用无参构造函数" << endl;
    }

    //有参构造
    Person(int age) {
        m_Age = age;
        cout << "Person调用有参构造函数" << endl;
    }

    //拷贝构造
    Person(const Person &p) {
        cout << "Person调用拷贝构造函数" << endl;
        m_Age = p.m_Age;
    }

    ~Person() {
        cout << "Person调用析构函数" << endl;
    }
};

//1、使用一个已经创建的对象来初始化一个新对象
void test01() {
    Person p1(20);
    Person p2 = Person(p1);
}

//2、值传递方式给函数参数传值
void doWork1(Person p) {

}

void test02() {
    Person p;
    doWork1(p);
}

//3、以值的方式返回局部对象
Person doWork2() {
    Person p1;
    cout << &p1 << endl;
    return p1;
}

void test03() {
    Person p2 = doWork2();
    cout << &p2 << endl;

}

int main() {
    test03();
    return 0;
}
