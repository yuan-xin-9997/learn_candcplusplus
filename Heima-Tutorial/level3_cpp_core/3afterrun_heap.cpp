//
// Created by Xin Yuan on 2023/9/3.
//
#include "iostream"
using namespace std;
int* func()
{
//    int * a = new int;
//    *a = 10;
	int * a = new int(10); // new返回的是该数据类型的指针，在堆区创建整型数据，int括号内的是值
	return a;
}

// 利用new操作符在堆区开辟数据
void test01(){
//    string s = "0x600000c2c040";
//    string *p1 = (*) &s;

    int *p = func();
    cout << "p=" << p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;
    cout << "删除p之后" << endl;
	cout << *p << endl; //报错，释放的空间不可访问
}

// 利用new在堆区开辟数组
void test02(){
    cout << endl;
    cout << " 利用new在堆区开辟数组" << endl;
    int* arr = new int[10]; //[]表示创建数组，[]里面的数组表示数组的长度

	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放数组 delete 后加 []
    cout << "fresh arr" << endl;
	delete[] arr;
    cout << "after fresh arr" << endl;
    for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

}

int main() {

	test01();

    test02();

//	system("pause");

	return 0;
}