/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

//初始化列表
class Person {
public:
    //初始化列表（写死的）
    //Person() : m_A(10), m_B(20), m_C(30) {
    //
    //}
    //初始化列表（灵活的）
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {

    }
    //传统初始化操作
    //Person(int a, int b, int c) {
    //    m_A = a;
    //    m_B = b;
    //    m_C = c;
    //}

    int m_A;
    int m_B;
    int m_C;


};

void test01() {
    Person p1(10, 20, 30);
    cout << "m_A=" << p1.m_A << "\nm_B=" << p1.m_B << "\nm_C=" << p1.m_C << endl;
}

int main() {
    test01();
    return 0;
}
