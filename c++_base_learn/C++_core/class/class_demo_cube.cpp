/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include<iostream>

using namespace std;

class Cube {
public:
    //设置长度
    void setM_L(int l) {
        if (l <= 0) {
            l = 0;
            cout << "长度小于等于0，错误！" << endl;
            return;
        }
        m_L = l;
    }

    //获取长度
    int getM_L() {
        return m_L;
    }

    //设置宽度
    void setM_W(int w) {
        if (w <= 0) {
            w = 0;
            cout << "宽度小于等于0，错误！" << endl;
            return;
        }
        m_W = w;
    }

    //获取宽度
    int getM_W() {
        return m_W;
    }

    //设置高度
    void setM_H(int h) {
        if (h <= 0) {
            h = 0;
            cout << "长度小于等于0，错误！" << endl;
            return;
        }
        m_H = h;
    }

    //获取高度
    int getM_H() {
        return m_H;
    }

    //获取全部属性
    void toString() {
        cout << "长：" << m_L << "  宽：" << m_W << "  高：" << m_H << endl;
    }

    //获取表面积
    int getArea() {
        return m_L * m_W * 2 + m_L * m_H * 2 + m_W * m_H * 2;
    }

    //获取立方体体积
    int getVolume() {
        return m_L * m_W * m_H;
    }

    //判断两个立方体是否相等
    bool isSame(Cube cube) {
        if (m_L == cube.getM_L() && m_H == cube.getM_H() && m_W == cube.getM_W()) {
            cout << "两个立方体相等。" << endl;
            return true;
        } else {
            cout << "两个立方体不相等。" << endl;
            return false;
        }
    }

private:
    int m_L;//长
    int m_W;//宽
    int m_H;//高
};

bool isSame(Cube c1, Cube c2) {
    if (c1.getM_L() == c2.getM_L() && c1.getM_H() == c2.getM_H() && c1.getM_W() == c2.getM_W()) {
        cout << "两个立方体相等。" << endl;
        return true;
    } else {
        cout << "两个立方体不相等。" << endl;
        return false;
    }
}

int main() {
    Cube c1;
    c1.setM_L(10);
    c1.setM_W(1);
    c1.setM_H(10);
    c1.toString();

    Cube c2;
    c2.setM_L(10);
    c2.setM_W(1);
    c2.setM_H(10);
    c2.toString();
    //成员函数判断
    c1.isSame(c2);
    //全局函数判断
    isSame(c1, c2);
    return 0;
}
