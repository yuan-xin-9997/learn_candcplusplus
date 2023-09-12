//
// Created by Administrator on 2023-09-12.
// 说明在C语言的结构体中不能存在成员函数

#include <stdio.h>
// 定义PI常量（不可更改）
//const double PI = 3.14;
//double PI = 3.14;
#define PI 3.14


struct Circle2{
    // 属性
    int m_r; // 半径

    // 行为
    // 获取圆的周长（在C语言中会报错）
//    double calculateCircle() const{
//        return PI * m_r * 2;
//    }
};

double calculateCircle(int m_r) {
        return PI * m_r * 2;
    }

int main(){
    struct Circle2 c2;
    c2.m_r = 20;
    printf("圆的周长为：%f ", calculateCircle(c2.m_r));

    return 0;
}
