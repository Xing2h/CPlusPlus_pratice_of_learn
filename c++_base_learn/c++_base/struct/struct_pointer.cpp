//
// Created by Xing on 2022/4/9.
//

#include<iostream>
#include<string>

using namespace std;
struct student {
    string name;
    int age;
    string sex;
};

int main() {
    student s = {"ZZZ", 16, "男"};
    student *p = &s;
    // 通过操作符 -> 访问成员变量
    cout << p->name << "是个" << p->age << "岁的" << p->sex << "孩儿。" << endl;
    return 0;
}