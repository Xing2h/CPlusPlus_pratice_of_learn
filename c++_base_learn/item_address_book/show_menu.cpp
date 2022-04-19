//
// Created by Xing on 2022/4/14.
//

#include<iostream>
#include<string>

using namespace std;
#define MAX 1000

/**
 * 展示菜单界面
 */
void showMenu() {
    cout << "*************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "*************************" << endl;
}

/**
 * 定义联系人结构体
 * @name 姓名
 * @sex 性别  1:男 2:女
 * @age 年龄
 * @phoneNumber 手机号
 * @address 家庭地址
 */
struct contact {
    string name;
    int sex;
    int age;
    string phoneNumber;
    string address;
};

/**
 * 定义通讯录结构体
 * @contactArray[MAX] 联系人数组
 * @size 通讯录内联系人数量
 */
struct addressBook {
    struct contact contactArray[MAX];
    int size;
};

/**
 *  添加联系人
 */
void addContact(struct addressBook *addressBook) {
    if (addressBook->size == MAX) {
        cout << "通讯录已满，无法继续添加！";
    } else {
        string name;
        cout << "请输入联系人姓名：" << endl;
        cin >> name;
        addressBook->contactArray[addressBook->size].name = name;

        while (true) {
            int age;
            cout << "请输入联系人性别:\n" << "1.男\n" << "2.女" << endl;
            cin >> age;
            if (age == 1 || age == 2) {
                addressBook->contactArray[addressBook->size].sex = age;
                break;
            }
            cout << "输入错误！只能输入1或者2！" << endl;
        }

        int age;
        cout << "请输入联系人年龄：" << endl;
        cin >> age;
        addressBook->contactArray[addressBook->size].age = age;

        string phoneNumber;
        cout << "请输入联系人电话：" << endl;
        cin >> phoneNumber;
        addressBook->contactArray[addressBook->size].phoneNumber = phoneNumber;

        string address;
        cout << "请输入联系人家庭住址：" << endl;
        cin >> address;
        addressBook->contactArray[addressBook->size].address = address;
        addressBook->size++;
        cout << "添加成功！" << endl;
        system("cls");
    }
}

void showContact(addressBook addressBook) {
    cout << "姓名\t\t" << "性别\t\t" << "年龄\t\t" << "电话\t\t\t\t\t\t" << "家庭地址" << endl;
    for (int i = 0; i < addressBook.size; i++) {
        if (addressBook.contactArray[i].sex == 1) {
            cout << addressBook.contactArray[i].name << "\t"
                 << "男" << "\t\t" << addressBook.contactArray[i].age
                 << "\t\t" << addressBook.contactArray[i].phoneNumber << "\t\t\t"
                 << addressBook.contactArray[i].address << endl;
        } else if (addressBook.contactArray[i].sex == 2) {
            cout << addressBook.contactArray[i].name << "\t"
                 << "女" << "\t\t" << addressBook.contactArray[i].age
                 << "\t\t" << addressBook.contactArray[i].phoneNumber << "\t\t\t"
                 << addressBook.contactArray[i].address << endl;
        }
    }
}

int main() {
    // 初始化通讯录变量
    struct addressBook addressBook;
    // 初始化通讯录内联系人数量
    addressBook.size = 0;


    int select = 0;
    while (true) {
        showMenu();
        cin >> select;
        switch (select) {
            case 1: // 1、添加联系人
                addContact(&addressBook);
                break;
            case 2: // 2、显示联系人
                showContact(addressBook);
                break;
            case 3: // 3、删除联系人
                break;
            case 4: // 4、查找联系人
                break;
            case 5: // 5、修改联系人
                break;
            case 6: // 6、清空联系人
                break;
            case 0: // 0、退出通讯录
                cout << "欢迎您下次使用本系统！" << endl;
                system("pause");
                return 0;
        }
    }
}