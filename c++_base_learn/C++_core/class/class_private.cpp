/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>
#include<string>

using namespace std;

class Person {
public:
    //写姓名
    void setName(string name) {
        m_Name = name;
    }

    //读姓名
    string getName() {
        return m_Name;
    }

    //设置年龄
    void setAge(int age) {
        if (age < 0 || age > 150) {
            m_Age = -1;
            cout << "年龄有误！" << endl;
            return;
        }
        m_Age = age;
    }


    //获取年龄
    int getAge() {
        return m_Age;
    }

    //设置情人
    void setLover(string lover) {
        m_Lover = lover;
    }

    void toString() {
        cout << "姓名：" << m_Name <<
             "\n年龄：" << m_Age <<
             "\n情人：" << m_Lover << endl;
    }

private:
    //姓名    可读可写
    string m_Name;
    //年龄    可读可写
    int m_Age;
    //情人    只写
    string m_Lover;
};

int main() {
    Person person;
    person.setName("Eric");
    person.setAge(99);
    person.setLover("Lily");
    person.toString();
    return 0;
}
