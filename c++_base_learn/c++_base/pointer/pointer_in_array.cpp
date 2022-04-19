//
// Created by Xing on 2022/4/9.
//

#include<iostream>

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7};
    int *p = array;// *p指向array[0]
    cout << "array[0]=" << array[0] << endl;
    // 利用指针访问数组首元素
    cout << "*p=" << *p << endl;
    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        //利用指针遍历数组
        cout << *p << endl;
        p++;
    }
    //cout << "*p=" << *p << endl;
    //cout << "p=" << p << endl;
    //int array2[][3] = {
    //        {1,2,3},
    //        {4,5,6}
    //};
    //int n = sizeof(array2) / sizeof(array2[0][0]);
    //int * p2 = array2;
    //for(int i = 0;i<sizeof(array2)/sizeof(array2[0]);i++){
    //    for (int j = 0; j < sizeof(array2[0])/sizeof(array2[0][0]);j++) {
    //        cout << array[i][j];
    //
    //    }
    //}
    return 0;
}