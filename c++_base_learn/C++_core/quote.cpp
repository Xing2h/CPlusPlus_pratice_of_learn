/***************************
 * @Author Xing
 * @Date 2022/5/5
 **************************/
#include<iostream>

using namespace std;

int main() {
    int a = 10;
    cout << a <<endl;
    int &b = a;
    b = 20;
    cout << a <<endl;
    return 0;
}
