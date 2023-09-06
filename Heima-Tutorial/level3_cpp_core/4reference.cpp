//
// Created by Xin Yuan on 2023/9/3.
//
#include "iostream"
using namespace std;

// 引用的基本使用、注意事项
void test01(){
    // 引用作用：给变量起别名

    // 引用基本语法
    // 数据类型 &别名 = 原名
    int a = 10;

    // 创建引用，注意和赋值、指针 的区别
    int & b = a;
//    int b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 100;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // 指针
    int * p_a = & a;
    cout << "*p_a = " << *p_a << endl;

    // 引用注意事项
    // 1. 引用前必须初始化
//    int &c; // 报错，编译不通过

    // 2. 不可更改引用
     int c = 20;
     b = c; // 赋值操作，不是更改引用
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

//    int &b = c;
}


//1. 值传递
void mySwap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2. 地址传递
void mySwap02(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3. 引用传递
void mySwap03(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

// 引用做函数参数
void test02(){
    cout << endl;
    cout << "引用做函数参数" << endl;
    int a = 10;
	int b = 20;

	mySwap01(a, b);//值传递
	cout << "a:" << a << " b:" << b << endl;

    a = 10;
    b = 20;

	mySwap02(&a, &b);// 地址传递
	cout << "a:" << a << " b:" << b << endl;

    a = 10;
    b = 20;

	mySwap03(a, b);// 引用传递
	cout << "a:" << a << " b:" << b << endl;
}


//返回局部变量引用
int& test31() {
	int a = 10; //局部变量
	return a;
}

//返回静态变量引用
int&test32() {
	static int a = 20; // 静态局部变量，存储的全局区域，生命周期拉长
	return a;
}

// 引用做函数的返回值
void test03(){
    cout << endl;
    cout << "引用做函数的返回值" << endl;

    //注意1.不能返回局部变量的引用
	int& ref = test31();
//	cout << "ref = " << ref << endl; // Process finished with exit code 139 (interrupted by signal 11: SIGSEGV)
//	cout << "ref = " << ref << endl; // Process finished with exit code 139 (interrupted by signal 11: SIGSEGV)

    // 2. 如果函数做左值，那么必须返回引用
    int&ref2 = test32();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test32() = 1000;

    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

}

//引用使用的场景，通常用来修饰形参
void showValue(const int& v) {
	//v += 10;
	cout << v << endl;
}

// 常量引用主要用来修饰形参，防止误操作
void test05(){
    cout << endl;
    cout    << "常量引用主要用来修饰形参，防止误操作" << endl;

    //int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
	const int& ref = 10;

//	ref = 100;  //加入const后不可以修改变量
	cout << ref << endl;

	//函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue(a);
}

int main(){

//    2.1 、 2.2  引用的基本使用、注意事项
    test01();

    // 2.3 引用做函数参数
    test02();

    // 2.4 引用做函数的返回值
    test03();

    // 2.5 引用的本质（指针常量，引用的本质在c++内部实现是一个指针常量，指针常量：const修饰的是常量，指针指向不可以改，指针指向的值可以更改）
    //  int& ref = a;  自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
    //

    // 2.6 常量引用
    test05();
}
