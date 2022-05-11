/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#pragma once

#include<iostream>
#include"point.h"

using namespace std;

class Circle {
public:

    //设置圆的半径
    void setM_R(int r);

    //获取圆的半径
    int getM_R();

    //设置圆心
    void setCenter(Point center);

    //获取圆心
    Point getCenter();

    //判断点和圆的关系
    void judgeRelationshipWithPoint(Point point);

private:
    Point m_center;
    int m_R;//圆的半径
};
