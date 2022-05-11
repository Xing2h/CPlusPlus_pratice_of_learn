/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

//成员变量和成员函数分开存储
class Person {

};

class Student1 {
    int age;//非静态成员变量   属于类对象上
};

class Student2 {
    int age;//非静态成员变量
    static int num;//静态成员变量 不属于类对象上
    void func() {}//非静态成员函数 不属于类对象
    static void func2() {}//静态成员函数 不属于类对象
};

void test01() {
    Person p;
    //空对象占用内存空间为1
    //C++编译器会给空对象分配一个字节内存空间，是为了区分空对象占内存的位置
    //每个空对象应该有一个独一无二的地质
    cout << "sizeof p = " << sizeof(p) << endl;
}

void test02() {
    Student1 s1;
    Student2 s2;
    cout << "sizeof s = " << sizeof(s1) << endl;
    cout << "sizeof s = " << sizeof(s2) << endl;
}

int main() {
    test02();
    return 0;
}
