//
// Created by Xin Yuan on 2023/9/19.
//
#include "iostream"
using namespace std;

// 对象的初始化和清理
/*
 * * 构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
* 析构函数：主要作用在于对象**销毁前**系统自动调用，执行一些清理工作。
**构造函数语法：**`类名(){}`
1. 构造函数，没有返回值也不写void
2. 函数名称与类名相同
3. 构造函数可以有参数，因此可以发生重载
4. 程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次

**析构函数语法：** `~类名(){}`
1. 析构函数，没有返回值也不写void
2. 函数名称与类名相同,在名称前加上符号  ~
3. 析构函数不可以有参数，因此不可以发生重载
4. 程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
 * */



//1、构造函数 进行初始化操作
class Person
{
public:
    // 构造函数  无返回值 无void 名字和类名相同，可以有入参数（支持重载）
    Person(){
        cout << "Person构造函数调用" << endl;
    }

    // 析构函数
    ~Person(){
        cout << "Person析构函数调用" << endl;
    }
};

int main(){
    Person p; // 栈上的数据，函数执行完了，会自动执行析构函数
}