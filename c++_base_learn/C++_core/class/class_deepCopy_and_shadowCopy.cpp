/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

//深拷贝：在堆区重新申请空间，进行拷贝
//浅拷贝：简单的赋值拷贝
class Person {
public:
    Person() {
        cout << "执行无参构造函数" << endl;
    }

    Person(int age, int height) {
        m_Age = age;
        m_Height = new int(height);
        cout << "执行无参构造函数" << endl;
    }

    //深拷贝
    Person(const Person &p) {
        cout << "执行拷贝构造函数" << endl;
        m_Age = p.m_Age;
        m_Height = new int(*p.m_Height);
    }
    //浅拷贝(编译器默认提供的拷贝)
    //Person(const Person &p) {
    //    cout << "执行拷贝构造函数" << endl;
    //    m_Age = p.m_Age;
    //    m_Height = p.m_Height;
    //}

    ~Person() {
        //析构函数释放堆取数据
        if (m_Height != NULL) {
            delete m_Height;//浅拷贝执行该操作可能会报错，需要深拷贝
            m_Height = NULL;
        }
        cout << "执行析构函数" << endl;
    }

    int m_Age;
    int *m_Height;
};

void test01() {
    Person p1(18, 180);
    cout << "p1的年龄为：" << p1.m_Age << "  身高为：" << *p1.m_Height << endl;
    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << "  身高为：" << *p2.m_Height << endl;
}

int main() {
    test01();
    return 0;
}
