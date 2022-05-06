/***************************
 * @Author Xing
 * @Date 2022/5/6
 **************************/
#include<iostream>
#include"math.h"

using namespace std;

//设计一个圆类，求周长
class Circle {
//访问权限
//私有权限
private:
    double PI = 3.14;
//公共权限
public:
    //属性
    //半径
    double m_r;

    //行为
    //获取圆的周长
    double calculateZC() {
        return 2 * PI * m_r;
    }
};

int main() {
    //通过类创建对象(实例化)
    Circle circle;
    //给对象赋值
    circle.m_r = 10;
    //调用对象的行为
    cout << "圆的周长为：" << circle.calculateZC() << endl;
    return 0;
}
