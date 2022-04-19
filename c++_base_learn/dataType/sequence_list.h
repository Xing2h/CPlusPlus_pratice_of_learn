/*
 * @Author Xing
 * @Date 2022/4/19.
 * 
 */

#ifndef C___BASE_LEARN_SEQUENCE_LIST_H
#define C___BASE_LEARN_SEQUENCE_LIST_H

#endif //C___BASE_LEARN_SEQUENCE_LIST_H
using namespace std;
#define INIT_SIZE 100
typedef struct SeqList {
    int *listArrays;
    int maxSize;
    int length;
} SeqList;

void initList(SeqList *list);

bool isEmpty(SeqList list);

void printList(SeqList list);

bool clearList(SeqList *list);

void randData(SeqList *list, int n);

/**
 * 生成随机数据
 * @param seqList 顺序表
 * @param n 要生成数据的个数
 */
void randData(SeqList *list, int n) {
    srand((unsigned) time(NULL));
    for (int i = 0; i < n; i++) {
        list->listArrays[i] = rand();
        list->length++;
    }
}

/**
 * 初始化顺序表
 * @param seqList
 */
void initList(SeqList *list) {
    list->listArrays = new int[INIT_SIZE];
    list->length = 0;
    list->maxSize = INIT_SIZE;
}

/**
 * 顺序表判空
 * @param list
 * @return
 */
bool isEmpty(SeqList list) {
    // 如果顺序表不存在
    if (!list.listArrays) {
        cout << "线性表不存在！" << endl;
        exit(1);
    }
    // 如果顺序表长度为0
    if (list.length == 0)
        return true;
    else
        return false;

}

/**
 * 打印顺序表
 * @param seqList
 */
void printList(SeqList list) {
    for (int i = 0; i < list.length; i++) {
        cout << list.listArrays[i] << " ";
    }
    cout << endl;
}

/**
 * 清空顺序表
 * @param list
 * @return 1:true;0:false;
 */
bool clearList(SeqList *list) {
    if (isEmpty(*list)) {
        cout << "该顺序表为空，不需要清空！" << endl;
        return false;
    }
    for (int i = list->length - 1; i > 0; i--) {
        list->listArrays[i] = 0;
        list->length--;
    }
    return true;
}

/**
 * 获取指定位置的元素并返回为e
 * @param list
 * @param i
 * @param e
 */
bool getElem(SeqList list, int i, int *e) {
    if (i < 1 || i > list.length) {
        cout << "该位置不存在！" << endl;
        return false;
    }
    *e = list.listArrays[i - 1];
    return true;
}

bool priorElem(SeqList list,int cur_e,int *pre_e){
    for (int i = 0; i < list.length; i++) {
        if (i>0||list.listArrays[i]==cur_e){
            *pre_e = list.listArrays[i-1];
            return true;
        }
    }
    return false;
}