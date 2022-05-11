/***************************
 * @Author Xing
 * @Date 2022/5/11
 **************************/
#pragma once

#include<iostream>

using namespace std;

class Point {
public:

    //设置点的横坐标
    void setM_X(int x);

    //获取点的横坐标
    int getM_X();

    //设置点的纵坐标
    void setM_Y(int y);

    //获取点的纵坐标
    int getM_Y();

private:
    int m_X;//点的横坐标
    int m_Y;//点的纵坐标
};
