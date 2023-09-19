//
// Created by Xin Yuan on 2023/9/19.
//

/*
 * #### 构造函数的分类及调用

两种分类方式：

​	按参数分为： 有参构造和无参构造

​	按类型分为： 普通构造和拷贝构造

三种调用方式：

​	括号法

​	显示法

​	隐式转换法
 * */

#include "iostream"
using namespace std;


//1、构造函数分类
// 按照参数分类分为 有参和无参构造   无参又称为默认构造函数
// 按照类型分类分为 普通构造和拷贝构造

class Person {
public:
	//无参（默认）构造函数
	Person() {
		cout << "无参构造函数!" << endl;
	}
	//有参构造函数
	Person(int a) {
		age = a;
		cout << "有参构造函数!" << endl;
	}
	//拷贝构造函数
	Person(const Person &p) {
		age = p.age;
		cout << "拷贝构造函数!" << endl;
	}
	//析构函数
	~Person() {
		cout << "析构函数!" << endl;
	}
public:
	int age;
};

//2、构造函数的调用
//调用无参构造函数
void test01() {
	Person p; //调用无参构造函数
}

//调用有参的构造函数
void test02() {

	//2.1  括号法，常用
	Person p1(10);
    Person p2(p1);
    cout << "p1的年龄：" << p1.age <<endl;
    cout << "p2的年龄：" << p2.age <<endl;
	//注意1：调用无参构造函数不能加括号，如果加了编译器认为这是一个函数声明 void func()，不会认为是创建对象，此外如果重名编译将不会通过
	Person p9();

	//2.2 显式法
	Person p3 = Person(10);
	Person p4 = Person(p3);
	//Person(10)单独写就是匿名对象  当前行结束之后，马上析构
    Person(10);

	//注意2：不能利用 拷贝构造函数 初始化匿名对象 编译器认为是对象声明，Person (p3) === Person p3;
//	Person(p3);

    	//2.3 隐式转换法
	Person p5 = 10 ; // 等价于 有参构造 显示法 Person p4 = Person(10);
	Person p6 = p5; // 等价于 拷贝构造 Person p5 = Person(p4);
}

int main() {

	test01();
	test02();

	return 0;
}