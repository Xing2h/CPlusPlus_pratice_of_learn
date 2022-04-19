//
// Created by Xing on 2022/4/8.
//

#include<iostream>

using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "sizeof(*p)=" << sizeof(*p) << endl;
    cout << "sizeof(p)=" << sizeof(p) << endl;
    cout << "sizeof(a)=" << sizeof(a) << endl;
    cout << "sizeof(int)=" << sizeof(int) << endl;
    cout << "char * 所占内存大小：" << sizeof(char *) << endl;
    cout << "int * 所占内存大小：" << sizeof(int *) << endl;
    cout << "float * 所占内存大小：" << sizeof(float *) << endl;
    cout << "double * 所占内存大小：" << sizeof(double *) << endl;
    return 0;
}