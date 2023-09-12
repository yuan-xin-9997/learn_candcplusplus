//
// Created by Administrator on 2023-09-12.
//
#include "iostream"
using namespace std;

int main() {
    // 常用数据类型的占用空间

    // 整型
	cout << "short 类型所占内存空间为： " << sizeof(short) << endl;
	cout << "int 类型所占内存空间为： " << sizeof(int) << endl;
	cout << "long 类型所占内存空间为： " << sizeof(long) << endl;
	cout << "long long 类型所占内存空间为： " << sizeof(long long) << endl;

    // 浮点型
    float f1 = 3.14f;
	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1<< endl;
	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;
	//科学计数法
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

    // 字符型
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;
	//ch = "abcde"; //错误，不可以用双引号
	//ch = 'abcde'; //错误，单引号内只能引用一个字符
	cout << (int)ch << endl;  //查看字符a对应的ASCII码
	ch = 98; //可以直接用ASCII给字符型变量赋值
	cout << ch << endl;

    // 字符串型  注意和字符型的区别
    char str1[] = "hello world";
//    char str2[] = 'hello world'; // 不可以用单引号
	cout << str1 << endl;


	return 0;
}
