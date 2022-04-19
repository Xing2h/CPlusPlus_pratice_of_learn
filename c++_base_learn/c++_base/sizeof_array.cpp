//
// Created by Xing on 2022/4/4.
//

#include <iostream>

using namespace std;

int main() {

    int arr[] = {10, 20, 30};
    // 可以统计整个数组在内存中的长度
    cout << "数组在内存中的长度：" << sizeof(arr) << endl;
    cout << "数组第一个元素在内存中的长度：" << sizeof(arr[0]) << endl;
    cout << "数组元素个数：" << sizeof(arr) / sizeof(arr[0]) << endl;
    // 可以获取数组在内存中的首地址
    cout << "数组在内存中的首地址:" << arr << endl;
    cout << "数组在内存中的第一个元素地址:" << &arr[0] << endl;
    cout << "数组在内存中的第二个元素地址:" << &arr[1] << endl;
    return 0;
}