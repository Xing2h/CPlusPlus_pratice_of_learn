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

// const修饰，防止误操作
void printStudent(const student *student) {
    //student->age = 11; // 操作失败，因为加入了const修饰
    cout << "name:" << student->name << ";age:" << student->age << endl;
}

int main() {
    struct student student = {"XYY", 11};
    printStudent(&student);
    return 0;
}