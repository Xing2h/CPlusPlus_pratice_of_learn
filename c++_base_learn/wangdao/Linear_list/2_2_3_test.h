/*
 * @Author Xing
 * @Date 2022/4/24.
 * 
 */

#ifndef C___BASE_LEARN_2_2_3_TEST_H
#define C___BASE_LEARN_2_2_3_TEST_H

#endif //C___BASE_LEARN_2_2_3_TEST_H
/**
 * 王道书数据结构第2.2.3节习题
 */
#include<iostream>

using namespace std;

/**
 * 动态分配顺序表
 * @data 数据
 * @length 表中元素个数
 * @maxSize 表的最大长度
 */
typedef struct {
    int *data;
    int length;
    int maxSize;
} SeqList;

/**
 * 第一题
 * 删除最小值(假设唯一)并由函数返回，空出的位置由最后一个补上
 * @param list
 * @param e
 * @return
 */
bool t01_delMin(SeqList &list, int &e) {
    int k = 0;
    if (list.length == 0)
        return false;
    e = list.data[0];
    for (int i = 1; i < list.length; i++) {
        if (list.data[i] < e) {
            e = list.data[i];
            k = i;
        }
    }
    list.data[k] = list.data[list.length - 1];
    list.length--;
    return true;
}

/**
 * 第二题
 * 将顺序表中所有元素逆置
 * @param list
 */
void t02_reverseList(SeqList &list) {
    int temp;
    for (int i = 0; i < list.length / 2; i++) {
        temp = list.data[i];
        list.data[i] = list.data[list.length - 1 - i];
        list.data[list.length - 1 - i] = temp;
    }
}

/**
 * 第三题
 * 删除顺序表中等于x的元素
 * @param list
 * @param x
 * @return
 */
void t03_del_x_1(SeqList &list, int x) {
    int i, k = 0;
    for (i = 0; i < list.length; i++) {
        if (list.data[i] != x) {
            list.data[k] = list.data[i];
            k++;// 记录不等于x的元素的个数
        }
    }
    list.length = k;
}

void t03_del_x_2(SeqList &list, int x) {
    int k = 0;
    for (int i = 0; i < list.length; i++) {
        if (list.data[i] == x)
            k++;
        else
            list.data[i - k] = list.data[i];
    }
    list.length -= k;
}

/**
 * 第四题
 * 删除有序表中s和t之间的元素
 * @param list
 * @param s
 * @param t
 * @return
 */
bool t04_del_s_t(SeqList &list, int s, int t) {
    if (s >= t || list.length == 0)
        return false;
    int i, j;
    for (i = 0; i < list.length && list.data[i] < s; i++);//遍历找到大于s的第一个值
    if (i >= list.length)//所有值都小于s
        return false;
    for (j = 0; j < list.length && list.data[j] <= t; j++);
    for (; j < list.length; j++, i++)
        list.data[i] = list.data[j];
    list.length = i;
    return true;
}

/**
 * 第五题
 * 从给定顺序表中删除s和t之间的元素
 * @param list
 * @param s
 * @param t
 * @return
 */
bool t05_del_s_t(SeqList &list, int s, int t) {
    if (s >= t || list.length == 0)
        return false;
    int i, k = 0;
    for (i = 0; i < list.length; i++) {
        if (list.data[i] >= s && list.data[i] <= t)
            k++;
        else
            list.data[i - k] = list.data[i];
    }
    list.length -= k;
    return true;
}

/**
 * 第六题
 * 删除有序顺序表中重复的元素
 * @param list
 * @return
 */
bool t06_delSame(SeqList &list) {
    int k = 0;
    for (int i = 1; i < list.length; i++) {
        if (list.data[i] == list.data[i - 1])
            k++;
        else
            list.data[i - k] = list.data[i];
    }
    list.length -= k;
    return true;
}

bool t06_delSame_2(SeqList &list) {
    if (list.length == 0)
        return false;
    int i = 1, k = 0;
    for (i = 1; i < list.length; i++) {
        if (list.data[i] != list.data[i - 1])
            list.data[++k] = list.data[i];
    }
    list.length = k + 1;
    return true;
}

/**
 * 第七题
 * 合并列表A和B
 * @param listA
 * @param listB
 * @param listC
 * @return
 */
bool t07_merge_A_B(SeqList listA, SeqList listB, SeqList &listC) {
    if (listA.length + listB.length > listC.maxSize)
        return false;
    int i = 0, j = 0, k = 0;
    while (i < listA.length && j < listB.length) {
        if (listA.data[i] <= listB.data[j])
            listC.data[k++] = listA.data[i++];
        else
            listC.data[k++] = listB.data[j++];
    }
    while (i < listA.length)
        listC.data[k++] = listA.data[i++];
    while (j < listB.length)
        listC.data[k++] = listB.data[j++];
    listC.length = k;
    return true;
}

/**
 * 第八题
 * 将一个表中的两个顺序表位置互换
 * @param list
 * @param left
 * @param right
 * @param arraySize
 */
bool t08_reverse(SeqList &list, int left, int right, int arraySize) {
    if (left >= right || right > arraySize)
        return false;
    int mid = (left + right) / 2;
    for (; left <= mid; left++, right--) {
        int temp = list.data[left];
        list.data[left] = list.data[right];
        list.data[right] = temp;
    }
    return true;
}

void t08_exchange(SeqList &list, int m, int n) {
    t08_reverse(list, 0, m + n - 1, m + n - 1);
    t08_reverse(list, 0, m - 1, m - 1);
    t08_reverse(list, m, m + n - 1, m + n - 1);
}
/**
 * 第九题
 * 在有序顺序表内用最短时间查找x，如果找到了就与它后继交换，找不到就插入x使表仍然有序
 * @param list
 * @param x
 * @return
 */
 // 这个函数可以实现查找和插入的功能，但是速度没有那么快
bool t09_search_x(SeqList &list,int x){
    if(list.length==0)
        return false;
    int i;
    for(i = 0;i<list.length&&list.data[i]<x;i++);
    if (list.data[i]==x){
        int temp = list.data[i];
        list.data[i] = list.data[i+1];
        list.data[i+1] = temp;
    }else{
        for(int j =list.length;j>=i;j--){
            list.data[j] = list.data[j-1];
        }
        list.data[i] = x;
        list.length++;
    }
    return true;
}