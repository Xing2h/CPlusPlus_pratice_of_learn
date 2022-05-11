/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#include "circle.h"
#include "point.h"

//设置圆的半径
void Circle::setM_R(int r) {
    m_R = r;
}

//获取圆的半径
int Circle::getM_R() {
    return m_R;
}

//设置圆心
void Circle::setCenter(Point center) {
    m_center = center;
}

//获取圆心
Point Circle::getCenter() {
    return m_center;
}

//判断点和圆的关系
void Circle::judgeRelationshipWithPoint(Point point) {
    if (((point.getM_X() - m_center.getM_X()) * (point.getM_X() - m_center.getM_X()) +
         (point.getM_Y() - m_center.getM_Y()) * (point.getM_Y() - m_center.getM_Y())) >
        (m_R * m_R)) {
        cout << "该点在圆外。" << endl;
    } else if (
            ((point.getM_X() - m_center.getM_X()) * (point.getM_X() - m_center.getM_X()) +
             (point.getM_Y() - m_center.getM_Y()) * (point.getM_Y() - m_center.getM_Y())) ==
            (m_R * m_R)) {
        cout << "该点在圆上。" << endl;
    } else {
        cout << "该点在圆内。" << endl;
    }
}
