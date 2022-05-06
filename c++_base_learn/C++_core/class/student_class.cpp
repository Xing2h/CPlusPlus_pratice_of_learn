/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>

using namespace std;

class Student {
public:
    //类中的属性和行为统称为 成员
    //属性：成员属性、成员变量
    //行为：成员函数、成员方法

    //属性
    string m_Name;
    string m_Id;

    //方法
    void toString() {
        cout << "姓名：" << m_Name << ";学号：" << m_Id << endl;
    }

    void setName(string name) {
        m_Name = name;
    }

    void setId(string id) {
        m_Id = id;
    }

    string getName() {
        return m_Name;
    }

    string getId() {
        return m_Id;
    }
};

int main() {
    Student student;
    student.setName("东方不败");
    student.setId("10000001");
    student.toString();
    return 0;
}
