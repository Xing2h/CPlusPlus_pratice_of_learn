//
// Created by Xing on 2022/4/4.
//

#include<iostream>

using namespace std;

int main() {
    cout << "请选择副本难度：" << endl;
    cout << "1-简单难度" << endl;
    cout << "2-困难难度" << endl;
    cout << "3-地狱难度" << endl;

    int select = 0;
    cin >> select;

    switch (select) {
        case 1:
            cout << "您选择的是简单难度！" << endl;
            break;
        case 2:
            cout << "您选择的是困难难度！" << endl;
            break;
        case 3:
            cout << "您选择的是地狱难度！" << endl;
            break;
        default:
            cout << "默认" << endl;
            break;
    }
    return 0;
}