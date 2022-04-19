/*
 * @Author Xing
 * @Date 2022/4/19.
 * 
 */

#include<iostream>
#include<ctime>
#include "sequence_list.h"

using namespace std;

int main() {
    SeqList seqList;
    initList(&seqList);
    //randData(&seqList, 10);
    for (int i = 0; i < 10; i++) {
        seqList.listArrays[i] = i;
        seqList.length++;
    }
    printList(seqList);
    int e;
    cout << "获取前e:" << e << endl;
    getElem(seqList, 1, &e);
    cout << "获取后e:" << e << endl;
    priorElem(seqList, e, &e);
    cout << "e的前一个元素：" << e << endl;
    return 0;
}