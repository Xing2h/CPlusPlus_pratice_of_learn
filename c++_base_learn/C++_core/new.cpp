/***************************
 * @Author Xing
 * @Date 2022/5/5.
 **************************/
#include<iostream>

using namespace std;

//1、new的基本语法
int *func() {
    //在堆区创建整形数据
    //new返回的是该数据类型的指针
    int *p = new int(10);
    return p;
}

void test01() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    // 堆区的数据有程序员管理开辟，程序员管理释放
    // 如果想释放内存，需要使用delete关键字
    delete p;
    cout << *p << endl;
}

void test02() {
    //2、在堆区开辟数组
    int *arr = new int[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;
    cout << arr[1] << endl;
}

int main() {
    test01();
    test02();
    return 0;
}
