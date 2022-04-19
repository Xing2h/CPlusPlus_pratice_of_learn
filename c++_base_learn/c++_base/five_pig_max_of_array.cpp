//
// Created by Xing on 2022/4/4.
//

#include <iostream>

using namespace std;

int main() {

    int arr[5] = {300, 350, 300, 400, 250};
    int max = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "最重的小猪体重：" << max << endl;
    return 0;
}