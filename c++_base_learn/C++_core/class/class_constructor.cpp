/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

class Person {

public:
    //普通构造
    //无参构造(默认构造)
    Person() {
        cout << "执行无参构造函数" << endl;
    }

    //有参构造
    Person(int a) {
        m_age = a;
        cout << "执行有参构造函数" << endl;
    }

    //拷贝构造
    Person(const Person &p) {
        //将拷贝对象的所有属性全部传到新建对象的身上
        cout << "执行拷贝参构造函数" << endl;
        m_age = p.m_age;
    }

    //析构函数
    ~Person() {
        cout << "执行析构函数" << endl;
    }

//private:
    int m_age;
};

//函数调用
void test01() {
    //1、括号法
    Person p1;
    Person p2(10);
    Person p3(p2);
    cout << "p2的年龄为：" << p2.m_age << endl;
    cout << "p3的年龄为：" << p3.m_age << endl;
}

void test02() {
    //2、显示法
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
    //匿名对象
    //特点：当前行执行结束后，系统会立即回收掉匿名对象
    Person(20);
    //Person(p2);//Person(p2) === Person p2;对象声明
}

void test03() {
    //3、隐式转换法
    Person p2 = 10; //相当于Person p2 = Person(10);
    Person p3 = p2; //相当于Person p3 = Person(p2);
    cout << "p2的年龄为：" << p2.m_age << endl;
    cout << "p3的年龄为：" << p3.m_age << endl;
}

int main() {
    //test01();
    test02();
    test03();
    return 0;
}
