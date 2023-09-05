//
// Created by Xin Yuan on 2023/9/5.
//

#include "iostream"
using namespace std;
//设计一个圆类，求圆的周长

//const double PI = 3.1415926535758;
const double PI = 3.14;

//1、封装的意义
//将属性和行为作为一个整体，用来表现生活中的事物

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名

class Circle{
public: // 访问权限   公共权限
    // 属性
    int m_r; // 半径

    // 行为
    // 获取圆的周长
    double calculateCircle() const{
        return PI * m_r * 2;
    }
};

int main(){
    // 通过圆类创建圆的对象
    // c1就是具体的圆
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为："  << c1.calculateCircle() << endl;
}