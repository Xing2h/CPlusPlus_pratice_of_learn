//
// Created by Xing on 2022/4/9.
//

#include<iostream>
#include<string>

using namespace std;

struct student {
    string name;
    int age;
};

// 值传递
void printStudent(student student) {
    cout << "name:" << student.name << ";age:" << student.age << endl;
};

// 地址传递
void printStudent(student *student) {
    cout << "name:" << student->name << ";age:" << student->age << endl;
}

int main() {
    struct student student = {"XYY", 11};
    // 值传递
    printStudent(student);
    // 地址传递
    printStudent(&student);
    return 0;
}