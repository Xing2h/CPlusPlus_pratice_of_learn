//
// Created by Xing on 2022/4/2.
//
#include<iostream>
#include<ctime>

using namespace std;

int main() {
    srand((unsigned) time(NULL));
    int ran = rand() % 100 + 1;
    int ci = 0;
    while (ci != ran) {
        cout << "请输入您要猜的数：";
        cin >> ci;
        if (ci > ran) {
            cout << "猜大了" << endl;
        } else if (ci < ran) {
            cout << "猜小了" << endl;
        }
    }
// 跳出循环说明猜对了
    cout << "生成的随机数为：" << ran << endl;
    cout << "恭喜您获胜" << endl;
    return 0;
}
