//
// Created by Xing on 2022/4/9.
//

#include<iostream>
#include<string>

using namespace std;

struct hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(hero *arrHero, int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (arrHero[j].age > arrHero[j + 1].age) {
                hero temp = arrHero[j];
                arrHero[j] = arrHero[j + 1];
                arrHero[j + 1] = temp;
            }
        }
    }
}

void printHero(hero *arrHero, int len) {
    for (int i = 0; i < len; i++) {
        cout << "姓名：" << arrHero[i].name << ";年龄：" << arrHero[i].age << ";性别：" << arrHero[i].sex << endl;
    }
}

int main() {
    struct hero arrHero[5] = {
            {"刘备",   20, "男"},
            {"关羽",   22, "男"},
            {"不知火舞", 18, "女"},
            {"诸葛亮",  16, "男"},
            {"小乔",   17, "女"}
    };
    int len = sizeof(arrHero) / sizeof(arrHero[0]);
    bubbleSort(arrHero, len);
    printHero(arrHero, len);
    return 0;
}