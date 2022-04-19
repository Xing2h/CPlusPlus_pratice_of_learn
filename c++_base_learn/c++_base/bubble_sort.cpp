//
// Created by Xing on 2022/4/7.
//

#include<iostream>

using namespace std;

int main() {
    int nums[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "排序前：" << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int temp = nums[j];
            if (nums[j] > nums[j + 1]) {
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    cout << "排序后：" << endl;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}