/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include "point.h"
#include "circle.h"

using namespace std;

//class Point {
//public:
//
//    //设置点的横坐标
//    void setM_X(int x) {
//        m_X = x;
//    }
//
//    //获取点的横坐标
//    int getM_X() {
//        return m_X;
//    }
//
//    //设置点的纵坐标
//    void setM_Y(int y) {
//        m_Y = y;
//    }
//
//    //获取点的纵坐标
//    int getM_Y() {
//        return m_Y;
//    }
//
//private:
//    int m_X;//点的横坐标
//    int m_Y;//点的纵坐标
//};

//class Circle {
//public:
//
//    //设置圆的半径
//    void setM_R(int r) {
//        m_R = r;
//    }
//
//    //获取圆的半径
//    int getM_R() {
//        return m_R;
//    }
//
//    //设置圆心
//    void setCenter(Point center) {
//        m_center = center;
//    }
//
//    //获取圆心
//    Point getCenter() {
//        return m_center;
//    }
//
//    //判断点和圆的关系
//    void judgeRelationshipWithPoint(Point point) {
//        if (((point.getM_X() - m_center.getM_X()) * (point.getM_X() - m_center.getM_X()) +
//             (point.getM_Y() - m_center.getM_Y()) * (point.getM_Y() - m_center.getM_Y())) >
//            (m_R * m_R)) {
//            cout << "该点在圆外。" << endl;
//        } else if (
//                ((point.getM_X() - m_center.getM_X()) * (point.getM_X() - m_center.getM_X()) +
//                 (point.getM_Y() - m_center.getM_Y()) * (point.getM_Y() - m_center.getM_Y())) ==
//                (m_R * m_R)) {
//            cout << "该点在圆上。" << endl;
//        } else {
//            cout << "该点在圆内。" << endl;
//        }
//    }
//
//private:
//    Point m_center;
//    int m_R;//圆的半径
//};


int main() {
    Circle circle;
    Point center;
    center.setM_X(0);
    center.setM_Y(0);
    circle.setCenter(center);
    circle.setM_R(1);

    Point point;
    point.setM_X(1);
    point.setM_Y(0);
    circle.judgeRelationshipWithPoint(point);

    return 0;
}
