/*
 * @Author Xing
 * @Date 2022/4/24.
 * 
 */

#ifndef C___BASE_LEARN_2_3_H
#define C___BASE_LEARN_2_3_H

#endif //C___BASE_LEARN_2_3_H

#include<iostream>

using namespace std;
/**
 * 定义单链表节点类型
 * @data 数据域
 * @next 指针域
 */
typedef struct LNode{
    int data;
    struct LNode *next;
} LNode, *LinkList;

LinkList headInsertList(LinkList &linkList) {
    LNode *s;
    int x;
    linkList = new LNode;
    linkList->next = NULL;
    cin >> x;
    while (x != 9999) {
        s = new LNode;
        s->data = x;
        s->next = linkList->next;
        linkList->next = s;
        cin >> x;
    }
    return linkList;
}