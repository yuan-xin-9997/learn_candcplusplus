//
// Created by Xin Yuan on 2023/9/6.
//


// 立方体设计
// 1. 创建立方体类
// 2. 设计属性
// 3. 设计行为，获取立方体面积和体积
// 4. 分别利用全局函数和成员函数，判断两个立方体是否相等

#include "iostream"
#include "string"

using namespace std;
class Cube{

public:
    // 设置长
    void setLength(int length){
        m_L = length;
    }

    // 设置宽
    void setWight(int wight){
        m_W = wight;
    }

    // 设置高
    void setHeight(int height){
        m_H = height;
    }

    // 获取长
    int getLength(){
        return m_L;
    }
    // 获取宽
    int getWight(){
        return m_W;
    }
    // 获取高
    int getHeight(){
        return m_H;
    }

    //计算立方体的面积
    int calculateS(){
        return 2 * (m_L * m_H + m_L * m_W + m_H * m_W);
    }

    // 计算立方体体积
    int calculateV(){
        return m_L * m_H * m_W;
    }

    // 利用成员函数判断立方体是否相等
    bool isSameByClass(Cube &c2){
        if (getLength() == c2.getLength() && getHeight() == c2.getHeight() && getWight() == c2.getWight()){
        return true;
    }
        return false;
    }

private:
    int m_L; // 长
    int m_W; // 宽
    int m_H;  // 高

};

// 利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2){//利用引用，减少变量的拷贝
    if (c1.getLength() == c2.getLength() && c1.getHeight() == c2.getHeight() && c1.getWight() == c2.getWight()){
        return true;
    }
        return false;
}


int main(){
    // 创建立方体对象
    Cube c1{};
    c1.setLength(10);
    c1.setWight(10);
    c1.setHeight(10);
    cout  << "长方体的体积为： " << c1.calculateS() << endl;
    cout  << "长方体的面积为： " << c1.calculateV() << endl;

    Cube c2{};
    c2.setLength(10);
    c2.setWight(10);
    c2.setHeight(11);
    bool ret = isSame(c1, c2);
    if (ret){
        cout << "立方体c1和c2相等 "<< endl;
    }else{
        cout << "立方体c1和c2不相等 "<< endl;
    }
    bool ret1 = c1.isSameByClass(c2);
    if (ret1){
        cout << "成员函数立方体c1和c2相等 "<< endl;
    }else{
        cout << "成员函数立方体c1和c2不相等 "<< endl;
    }

}