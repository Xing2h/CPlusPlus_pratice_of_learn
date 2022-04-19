//
// Created by Xing on 2022/4/18.
//

#include<iostream>

using namespace std;
#define MAX_SIZE 100

/**
 * 定义线性表结构体
 * @data 数组
 * @length 链表元素个数
 * @maxSize 链表最大存储容量
 */
struct List {
    int *data;
    int length;
    int maxSize;
} SeqList;

/**
 * 向线性表指定位置插入指定元素
 * @param L 线性表
 * @param i 要插入元素的位置
 * @param e 要插入的元素
 * return 如果插入成功返回true,否则返回false
 */
bool insertList(List &L, int i, int e) {
    // 如果要插入的位置超过了线性表长度或者小于1，返回false
    if (i > L.length + 1 || i < 1) {
        return false;
    }
    // 如果线性表已满
    if (L.length >= MAX_SIZE) {
        return false;
    }
    // 将第i个元素及之后的元素向后挪一位
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    return true;
}
/**
 * 查找指定位置的元素
 * @param L 要查找的线性表
 * @param i 要查找元素的位置
 * @return 返回查找位置的元素的值
 */
int getElem(List &L,int i){
    return L.data[i-1];
}
/**
 * 查找指定元素的位置
 * @param L 线性表
 * @param e 要查找的元素
 * @return  返回该元素的位置,如果没有找到返回-1
 */
int locateElem(List &L,int e){
    for(int i = 0;i<L.length;i++){
        if (L.data[i]==e){
            return i;
        }
    }
    return -1;
}

int main() {
    // 初始分配大小
    SeqList.data = new int[MAX_SIZE];
    return 0;
}