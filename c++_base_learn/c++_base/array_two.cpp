//
// Created by Xing on 2022/4/7.
//

#include<iostream>

using namespace std;

int main() {
    //1. 二维数组定义
    // 数据类型 数组名[行数][列数]
    int arr1[2][2];
    // 数据类型 数组名[行数][列数] = {数据1,数据2},{数据3,数据4};
    int arr2[2][2] = {
            {1, 2},
            {3, 4}
    };
    // 数据类型 数组名[行数][列数] = {数据1,数据2,数据3,数据4};
    int arr3[2][2] = {1, 2, 3, 4};
    //数据类型 数组名[][列数] = {数据1,数据2,数据3,数据4};
    int arr4[][2] = {1, 2, 3, 4};

    //2. 二维数组数组名
    cout << "二维数组所占内存空间：" << sizeof(arr2) << endl;
    cout << "二维数组第一行所占内存空间：" << sizeof(arr2[0]) << endl;
    cout << "二维数组首元素所占内存空间：" << sizeof(arr2[0][0]) << endl;
    cout << "二维数组行数：" << sizeof(arr2) / sizeof(arr2[0]) << endl;
    cout << "二维数组元素数：" << sizeof(arr2) / sizeof(arr2[0][0]) << endl;
    cout << "二维数组首地址：" << arr2 << endl;
    cout << "二维数组首行地址：" << arr2[0] << endl;
    cout << "二维数组第二行地址：" << arr2[1] << endl;
    cout << "二维数组首元素地址：" << &arr2[0][0] << endl;
    cout << "二维数组第二个地址：" << &arr2[0][1] << endl;
    return 0;
}