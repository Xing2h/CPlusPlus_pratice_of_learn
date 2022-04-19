//
// Created by Xing on 2022/4/4.
//

#include <iostream>

using namespace std;

int main() {

    int arr[] = {1, 3, 2, 5, 4};
    //int length = sizeof(arr) / sizeof(arr[0]);//获取数组长度
    //cout << length << endl;
    //int n = length;
    //for(int j = 0;j<n;j++){
    //    for (int i = 0; i < length - 1; i++) {
    //        int temp = arr[i];
    //        arr[i] = arr[i + 1];
    //        arr[i + 1] = temp;
    //    }
    //    length--;
    //}
    int start = 0;//起始下标
    int end = sizeof(arr) / sizeof(arr[0]) - 1;//结尾下标
    do {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } while (start < end);
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        cout << arr[i] << endl;
    }
    return 0;
}