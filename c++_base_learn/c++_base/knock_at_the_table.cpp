//
// Created by Xing on 2022/4/4.
//

#include<iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 10 == 7 || i / 10 == 7 || i % 7 == 0) {
            cout << "敲桌子:" << i << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}