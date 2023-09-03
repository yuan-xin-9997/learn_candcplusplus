//
// Created by Xin Yuan on 2023/9/3.
//
#include "iostream"
using namespace std;
int* func()
{
	int * a = new int(10); // new返回的是该数据类型的指针，在堆区创建整型数据
	return a;
}

// 利用new操作符在堆区开辟数据
void test01(){
    int *p = func();

	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;

	cout << *p << endl; //报错，释放的空间不可访问
}

// 利用new在堆区开辟数组
void test02(){
    int* arr = new int[10];

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

    for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

}

int main() {

//	test01();

    test02();

//	system("pause");

	return 0;
}