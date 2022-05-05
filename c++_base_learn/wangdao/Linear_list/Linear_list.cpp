/*
 * @Author Xing
 * @Date 2022/4/24.
 * 
 */

#include<iostream>
#include "2_2_3_test.h"

using namespace std;
//固定的长度线性表的最大长度
#define MAX_SIZE 50
// 动态分配顺序表的初始长度
#define INIT_SIZE 100

/**
 * 静态分配顺序表
 * @data 数据
 * @length 表中元素个数
 */
typedef struct {
    int data[MAX_SIZE];
    int length;
} sqList;


bool initList(sqList &list);

bool initList(SeqList &list);

void printList(SeqList list);

bool insertList(SeqList &list, int i, int e);


/**
 * 初始化顺序表
 * @param list
 * @return
 */
bool initList(SeqList &list) {
    list.data = new int[INIT_SIZE];
    if (list.data == NULL)
        return false;
    list.maxSize = INIT_SIZE;
    list.length = 0;
    return true;
}

bool initList(sqList &list) {
    list.length = 0;
    return true;
}

/**
 * 在指定位置插入指定元素
 * @param list
 * @param i 要插入元素的位置
 * @param e 要插入的元素
 * @return
 */
bool insertList(SeqList &list, int i, int e) {
    if (i < 1 || i > list.length + 1)//判断i的范围是否有效
        return false;
    if (list.length >= list.maxSize)// 判断表是否已满
        return false;
    for (int j = list.length; j >= i; j--) {
        list.data[j] = list.data[j - 1];
    }
    list.data[i - 1] = e;
    list.length++;
    return true;
}

/**
 * 打印顺序表
 * @param list
 */
void printList(SeqList list) {
    for (int i = 0; i < list.length; i++) {
        cout << i << ":" << list.data[i] << " ";
    }
    cout << endl;
}

/**
 * 删除指定位置的元素并返回给e
 * @param list
 * @param i
 * @param e
 * @return
 */
bool deleteElem(SeqList &list, int i, int &e) {
    if (i < 1 || i > list.length)
        return false;
    e = list.data[i - 1];
    for (int j = i; j < list.length; j++) {
        list.data[j - 1] = list.data[j];
    }
    list.length--;
    return true;
}

/**
 * 查找指定元素，并返回其位序
 * @param list
 * @param e
 * @return
 */
int searchElem(SeqList list, int e) {
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == e)
            return i + 1;
    }
    return 0;
}

/**
 *
 */


int main() {
    //顺序表
    sqList sqList1;
    SeqList seqList;
    initList(seqList);
    for (int i = 0; i < 20; i++) {
        seqList.data[i] = i;
        seqList.length++;
    }
    cout << "初始值：" << endl;
    printList(seqList);
    //cout << "在第4个位置插入99" << endl;
    //insertList(seqList, 4, 99);
    //printList(seqList);
    //cout << "删除第6个元素：" << endl;
    //int e = -1;
    //deleteElem(seqList, 6, e);
    //printList(seqList);
    //cout << "删除的元素是：" << e << endl;
    //
    //int i = searchElem(seqList, 9);
    //cout << "9是第" << i << "个元素" << endl;
    //if (t01_delMin(seqList, e)) {
    //    cout << "删除的最小元素是：" << e << endl;
    //    printList(seqList);
    //}
    //cout << "顺序表逆置：" << endl;
    //t02_reverseList(seqList);
    //printList(seqList);
    //cout << "删除为9的元素" << endl;
    //t03_del_x_1(seqList, 9);
    //printList(seqList);
    //cout << "删除为11的元素:" << endl;
    //t03_del_x_2(seqList, 11);
    //printList(seqList);
    //cout << "删除5和10之间的数：" << endl;
    //t04_del_s_t(seqList, 5, 10);
    //printList(seqList);
    //t05_del_s_t(seqList,5,10);
    //printList(seqList);
    //for (int i = 0; i < 10; i++) {
    //    cin >> seqList.data[i];
    //    seqList.length++;
    //};
    //printList(seqList);
    //t06_delSame(seqList);
    //t06_delSame_2(seqList);
    //printList(seqList);
    //cout << seqList.length;
    //t08_exchange(seqList, 10, 10);
    //printList(seqList);
    t09_search_x(seqList,20);
    printList(seqList);
    return 0;
}