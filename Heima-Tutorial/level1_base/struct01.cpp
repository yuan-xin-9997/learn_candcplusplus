//
// Created by Administrator on 2023-09-12.
// 说明struct和class相同的地方，下面的例子说明，struct和class在c++中几乎没有区别（除了默认访问权限）

#include "iostream"
using namespace std;

//const double PI = 3.1415926535758;
const double PI = 3.14;

//封装一个圆类，求圆的周长
//class代表设计一个类，后面跟着的是类名
class Circle1{
public: // 访问权限   公共权限
    // 属性
    int m_r; // 半径

    // 行为
    // 获取圆的周长
    double calculateCircle() const{
        return PI * m_r * 2;
    }
};

struct Circle2{
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
    class Circle1 c1;
    c1.m_r = 10;
    cout << "圆的周长为："  << c1.calculateCircle() << endl;

    struct Circle2 c2;
    c2.m_r = 20;
    cout << "圆的周长为："  << c2.calculateCircle() << endl;
}