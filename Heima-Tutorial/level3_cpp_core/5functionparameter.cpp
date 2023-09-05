//
// Created by Xin Yuan on 2023/9/4.
//
#include "iostream"
using namespace std;

//1. 如果某个位置参数有默认值，那么从这个位置往后，从左向右，必须都要有默认值
int func(int a, int b = 10, int c = 10) {
	return a + b + c;
}

//2. 如果函数声明有默认值，函数实现的时候就不能有默认参数
// 声明和实现只能有一处有默认参数
int func2(int a = 10, int b = 10);// 声明
void test03();

int func2(int a, int b) {//实现
	return a + b;
}

// 1. 函数默认参数
void test01(){
    cout << "ret = " << func(20, 20) << endl;
	cout << "ret = " << func(100) << endl;
	cout << "ret = " << func2() << endl;
	cout << "ret = " << func2(20, 20) << endl;
}

void func3(int a, int ){
    cout << "this is func3 "<< endl;
}

// 2. 函数占位符：函数占位参数 ，占位参数也可以有默认参数
void test02(){
    func3(10, 10);// 占位参数必须填补
}


// 3. 函数重载
/*
 * 作用：函数名可以相同，提高复用性
 *
 * **函数重载满足条件（宗旨是避免二义性）：**
    * 同一个作用域下
    * 函数名称相同
    * 函数参数**类型不同**  或者 **个数不同** 或者 **顺序不同**
    *
* 函数的返回值不可以作为函数重载的条件
 * */
void func4()
{
	cout << "func4 的调用！" << endl;
}
void func4(int a)
{
	cout << "func4 (int a) 的调用！" << endl;
}
void func4(double a)
{
	cout << "func4 (double a)的调用！" << endl;
}
void func4(int a ,double b)
{
	cout << "func4 (int a ,double b) 的调用！" << endl;
}
void func4(double a ,int b)
{
	cout << "func4 (double a ,int b)的调用！" << endl;
}

// 引用作为重载条件
void func5(int &a) // 如果传入参数是10，则相当于int &a=10，引用必须先进行初始化，因此不合法
{
	cout << "func (int &a) 调用 " << endl;
}

void func5(const int &a) // 如果传入参数是10，相当于const int &a = 10，合法
// 加入const就可以了，编译器优化代码，int temp = 10; const int& a = temp;
// 如果传入变量int a = 10，在没有上面的函数时，也会调用此函数
{
	cout << "func (const int &a) 调用 " << endl;
}

// 函数参数作为重载条件
void func6(int a, int b = 10)
{
	cout << "func6(int a, int b = 10) 调用" << endl;
}

void func6(int a)
{
	cout << "func6(int a) 调用" << endl;
}


// 函数重载
void test03() {
//    函数重载条件
    func4();
	func4(10);
	func4(3.14);
	func4(10,3.14);
	func4(3.14 , 10);

    // 引用作为重载条件
    int a = 10;
	func5(a); //调用无const
	func5(10);//调用有const，因为如果传入参数是10，则相当于int &a=10，引用必须先进行初始化，因此不合法

    // 默认参数作为重载条件
//    func6(10);//碰到默认参数产生歧义，需要避免
}

int main() {

	// 1. 函数默认参数
    test01();

    // 2. 函数占位符
    test02();

    // 3. 函数重载
    test03();

	return 0;
}

