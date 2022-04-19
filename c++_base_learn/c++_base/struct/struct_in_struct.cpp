//
// Created by Xing on 2022/4/9.
//

#include<iostream>
#include<string>
using namespace std;

struct phone {
    string type;
    string number;
};

struct person {
    string name;
    int age;
    string sex;
    struct phone phone;
};

int main() {
    struct person p1 = {"XYY", 11, "男", {"HUAWEI nova5Pro", "17539776800"}};
    cout << p1.name << " " << p1.age << " " << p1.sex << " " <<p1.phone.type << " " << p1.phone.number << endl;
    return 0;
}