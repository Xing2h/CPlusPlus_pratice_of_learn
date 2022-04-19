//
// Created by Xing on 2022/4/2.
//
#include<iostream>

using namespace std;

int main() {
    int pigA, pigB, pigC;
    string max;
    // 分别输入三只小猪的重量
    cout << "请输入pigA的重量：";
    cin >> pigA;
    cout << "请输入pigB的重量：";
    cin >> pigB;
    cout << "请输入pigC的重量：";
    cin >> pigC;
    if (pigA > pigB) {
        max = "pigA";
        if (pigA < pigC) {
            max = "pigC";
        } else if (pigA == pigC) {
            max = "pigA and pigC";
        }
    } else if (pigA < pigB) {
        max = "pigB";
        if (pigB < pigC) {
            max = "pigC";
        } else if (pigB == pigC) {
            max = "pigB and pigC";
        }
    }else if (pigA==pigB){
        max = "pigA and pigB";
        if(pigA < pigC){
            max = "pigC";
        }else if(pigA==pigC){
            max = "pigA and pigB and pigC";
        }
    }
    cout << "最重的小猪是：" << max << endl;
    return 0;
}
