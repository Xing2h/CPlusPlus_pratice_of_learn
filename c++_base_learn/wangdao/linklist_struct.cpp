#include<iostream>
#include<string>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2

//定义学生student类型
struct student {
    int no;         //学号
    string name;  //姓名
};

typedef int Status;
typedef student ElemType; //线性表的元素类型 指定为student类型

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

//LNode *LocateELem_L(LinkList L, ElemType e);
int LocateELem_L(LinkList L, ElemType e);

int main() {
    LinkList L;
    //CreateList_F(L, 5);
    CreateList(L, 5);
    printL(L);
    ElemType e;
    e.no = 1;
    e.name = "dad";
    int r;
    r = LocateELem_L(L, e);//在L中找学号为5的元素 返回元素的位置
    if (r != 0)
        cout << "查找成功！ 该元素的位置在：" << r << endl;
    else
        cout << "查找失败！" << endl;


    //LNode *p;
    //p=LocateELem_L(L,3);//在L中找元素3
    //if(p!=NULL)
    //    cout<<"查找成功！ "<< p->data.no <<" " << p->data.name<<endl;
    //else        cout<<"查找失败！"<<endl;


    r = GetElem_L(L, 1, e);  //在L中找第1个元素，使用参数e带回来结果
    if (r == OK)
        cout << "查找成功，L中第1个元素是：" << e.no << " " << e.name << endl;
    else
        cout << "查找失败！" << endl;

    r = GetElem_L(L, 10, e); //在L中找第10个元素，使用参数e带回来结果
    if (r == OK)
        cout << "查找成功，L中第10个元素是：" << e.no << " " << e.name << endl;
    else
        cout << "查找失败！" << endl;

    ElemType e1,e2 ;
    e1.no  =10;
    e1.name="eric";
    e2.no  =99;
    e2.name  ="bruce";
    ListInsert_L(L, 20, e1); //向单链表L中第20个位置，插入新元素100
    ListInsert_L(L, 5, e2); //向单链表L中第5个位置，插入新元素200
    printL(L);

    ListDelete_L(L, 1, e);  //删除L中的第1个元素，并使用e接收被删除元素
    printL(L);
    cout << "被删除的元素是：" << e.no << " "<< e.name<<endl;

    return 0;
}
// 头插法
void CreateList_F(LinkList &L, int n) {
    L = new LNode;
    L->next = NULL; //先建立一个带头结点的单链表
    for (int i = n; i > 0; --i) {
        LNode *p = new LNode; //生成新结点
        cin >> p->data.no >> p->data.name; //输入元素值
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
        cin >> s->data.no >> s->data.name;
        p->next = s;
        p = s;
        p->next = NULL;
    }
}

void printL(LinkList L) {
    LNode *p = L->next;
    while (p != NULL) {
        cout << p->data.no << "  " << p->data.name << endl;
        p = p->next;
    }
    cout << "\n单链表显示结束！\n\n";
}

Status ListInsert_L(LinkList &L, int i, ElemType e) {
    LNode *p = L;
    int j = 0;
    while (p && j < i - 1) {
        p = p->next;
        ++j;
    }    //寻找第i-1个结点
    if (!p || j > i - 1)return ERROR;
    LNode *s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

//将线性表L中第i个数据元素删除
Status ListDelete_L(LinkList &L, int i, ElemType &e) {
    LNode *p = L;
    int j = 0;
    while (p->next && j < i - 1) {                  //寻找第i个结点，并令p指向其前驱
        p = p->next;
        ++j;
    }
    if (!(p->next) || j > i - 1)
        return ERROR; //删除位置不合理
    LNode *q = p->next;                     //临时保存被删结点的地址以备释放
    p->next = q->next;                      //改变删除结点前驱结点的指针域
    e = q->data;                            //保存删除结点的数据域
    delete q;                               //释放删除结点的空间
    return OK;
}

Status GetElem_L(LinkList L, int i, ElemType &e) {
    LNode *p = L->next;
    int j = 1; //初始化
    while (p && j < i) {    //向后扫描，直到p指向第i个元素或p为空
        p = p->next;
        ++j;
    }
    if (!p || j > i)
        return ERROR; //第i个元素不存在
    e = p->data; //取第i个元素
    return OK;
}

//LNode *LocateELem_L (LinkList L,ElemType e) {
// //返回L中值为e的数据元素的地址，查找失败返回NULL
//  LNode *p=L->next;
//  while(p &&p->data.no!=e.no&&p->data.name!=e.name)
//        p=p->next;
//  return p;
//}

int LocateELem_L(LinkList L, ElemType e) {
    //返回L中值为e的数据元素的位置序号，查找失败返回0
    LNode *p = L->next;
    int j = 1;
    while (p && p->data.no != e.no && p->data.name != e.name) {
        p = p->next;
        j++;
    }
    if (p) return j;
    else return 0;
}