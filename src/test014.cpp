//
// Created by Xin Yuan on 2023/8/24.
//
#include "iostream"
#include "string"
using namespace std;

//学生结构体定义
struct student
{
	//成员列表
	string name;  //姓名
	int age;      //年龄
	int score;    //分数
};

//const使用场景
void printStudent(const student *stu) //加const防止函数体中的误操作
{
	//stu->age = 100; //操作失败，因为加了const修饰
    student a = {"张三1", 181, 1001};
    stu = &a; //const可以防止修改stu指针的指向，但是不可以修改stu指针指向的值，所以是常量指针

	cout << "姓名：" << stu->name << " 年龄：" << stu->age << " 分数：" << stu->score << endl;

}

int main() {

	student stu = { "张三",18,100 };

	printStudent(&stu);

	return 0;
}