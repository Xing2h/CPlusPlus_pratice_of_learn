/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>
#include<string>

using namespace std;

class Phone {
public:
    Phone(string brand) : m_brand(brand) {
        cout << "Phone 执行构造函数" << endl;
    }

    ~Phone() {
        cout << "Phone 执行析构函数" << endl;
    }

public:
    string m_brand;
};

class Person {
public:
    Person(string name, string pName) : m_Name(name), m_Phone(pName) {
        cout << "Person 执行构造函数" << endl;
    }

    ~Person() {
        cout << "Person 执行析构函数" << endl;
    }

public:
    string m_Name;
    Phone m_Phone;
};

void test01() {
    Person person("Eric", "Huawei");
    cout << person.m_Name << "的手机品牌是：" << person.m_Phone.m_brand << endl;
}

int main() {
    test01();
    return 0;
}
