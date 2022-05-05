#include<iostream>

using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;
typedef char ElemType;

typedef struct LNode {
    ElemType data;       //数据域
    struct LNode *next;   //指针域
} LNode, *LinkList;

void CreateList_F(LinkList &L, int n);

void CreateList(LinkList &L, int n);

void printL(LinkList L);

Status ListInsert_L(LinkList &L, int i, ElemType e);

Status ListDelete_L(LinkList &L, int i, ElemType &e);

Status GetElem_L(LinkList L, int i, ElemType &e);

// 只有返回类型不同的同名函数不可以重载，下面两个函数只能存在一个
//LNode *LocateELem_L(LinkList L, ElemType e);
int LocateELem_L(LinkList L, ElemType e);

int main() {
    LinkList L;
    //CreateList_F(L, 5);
    CreateList(L,5);
    printL(L);

    int r;
    r = LocateELem_L(L, 'e');//在L中找元素E 返回元素的位置
    if (r != 0) cout << "查找成功！ 该元素的位置在：" << r << endl;
    else cout << "查找失败,元素E不存在！" << endl;

    ElemType e;
    r = GetElem_L(L, 1, e);  //在L中找第1个元素，使用参数e带回来结果
    if (r == OK)
        cout << "查找成功，L中第1个元素是：" << e << endl;
    else
        cout << "查找失败！" << endl;

    r = GetElem_L(L, 10, e); //在L中找第10个元素，使用参数e带回来结果
    if (r == OK)
        cout << "查找成功，L中第10个元素是：" << e << endl;
    else
        cout << "查找失败！" << endl;

    ListInsert_L(L, 10, 'x'); //向单链表L中第20个位置，插入新元素100
    ListInsert_L(L, 3, 'z'); //向单链表L中第5个位置，插入新元素200
    printL(L);

    ListDelete_L(L, 1, e);  //删除L中的第1个元素，并使用e接收被删除元素
    printL(L);
    cout << "被删除的元素是：" << e;
    return 0;
}

// 头插法
void CreateList_F(LinkList &L, int n) {
    L = new LNode;
    L->next = NULL; //先建立一个带头结点的单链表
    for (int i = n; i > 0; --i) {
        LNode *p = new LNode; //生成新结点
        cin >> p->data; //输入元素值
        p->next = L->next;
        L->next = p;    //插入到表头
    }
}

//尾插法
void CreateList(LinkList &L, int n) {
    L = new LNode;//建立头节点
    L->next = NULL;
    LNode *p = L;
    for (int i = 0; i < n; i++) {
        LNode *s = new LNode;
        cin >> s->data;
        p->next = s;
        p = s;
        p->next = NULL;
    }
}

// 打印链表
void printL(LinkList L) {
    LNode *p = L->next;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << "\n单链表显示结束！" << endl;
}
// 在指定位置插入元素
Status ListInsert_L(LinkList &L, int i, ElemType e) {
    LNode *p = L;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        ++j;
    }
    if (!p || j > i - 1)
        return ERROR;
    LNode *s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}
// 删除指定节点，并将该节点数据返回给e
Status ListDelete_L(LinkList &L, int i, ElemType &e) {
    LNode *p = L;
    int j = 0;
    while (p->next && j < i - 1) {
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i - 1)
        return ERROR;
    LNode *q = p->next;
    p->next = q->next;
    e = q->data;
    delete q;
    return OK;
}
// 按位查找，并返回给e
Status GetElem_L(LinkList L, int i, ElemType &e) {
    LNode *p = L->next;
    int j = 1;
    while (p && j < i) {
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR;
    e = p->data;
    return OK;
}
// 查找data=e的节点，并返回该节点
//LNode *LocateELem_L(LinkList L, ElemType e) {
//    LNode *p = L->next;
//    while (p && p->data != e)
//        p = p->next;
//    return p;
//}
// 按值查找，并返回该节点的位序
int LocateELem_L(LinkList L, ElemType e) {
    //返回L中值为e的数据元素的位置序号，查找失败返回0
    LNode *p = L->next;
    int j = 1;
    while (p && p->data != e) {
        p = p->next;
        j++;
    }
    if (p)
        return j;
    else
        return 0;
}