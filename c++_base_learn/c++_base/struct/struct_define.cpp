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
} s3;// s3 为结构体变量
int main() {
    // 第一种定义方式 struct 结构体名 变量名;
    // struct 可以省略
    //struct student s1;
    student s1;
    s1.name = "XYY";
    s1.age = 10;
    s1.sex = "男";
    cout << s1.name << "是个" << s1.age << "岁的" << s1.sex << "孩儿。" << endl;

    //第二种定义方式 struct 结构体名 变量名 = {成员1值,成员2值,...}
    struct student s2 = {"DYY", 12, "女"};
    cout << s2.name << "是个" << s2.age << "岁的" << s2.sex << "孩儿。" << endl;

    // 第三种定义方式 定义结构体是顺便创建结构体变量
    s3.name = "YYY";
    s3.age = 14;
    s3.sex = "女";
    cout << s3.name << "是个" << s3.age << "岁的" << s3.sex << "孩儿。" << endl;

    cout << "sizeof(student)=" << sizeof(student) << endl;
    // 创建结构体数组
    struct student students[5] = {
            {"XYY", 10, "男"},
            {"DYY", 12, "女"},
            {"YYY", 14, "女"}
    };
    // 给结构体数组中的元素赋值
    students[3] = {"ZZZ", 16, "男"};

    students[4].name = "XXX";
    students[4].age = 18;
    students[4].sex = "男";
    // 遍历结构体数组
    for (int i = 0; i <5;i++){
        cout << students[i].name << "是个" << students[i].age << "岁的" << students[i].sex << "孩儿。" << endl;
    }
    return 0;
}