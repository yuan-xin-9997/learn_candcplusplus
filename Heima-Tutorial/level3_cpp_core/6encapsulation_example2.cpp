//
// Created by Xin Yuan on 2023/9/5.
//
#include "iostream"
using namespace std;

//学生类
class Student {
public: // 访问权限

    // 类中的属性和行为都成为属性，属性称为成员属性、成员变量，行为称为成员函数、成员方法

    // 属性
    string m_name;
	int m_id;

//    方法、行为
	void setName(string name) {
		m_name = name;
	}
	void setID(int id) {
		m_id = id;
	}

	void showStudent() {
		cout << "name:" << m_name << " ID:" << m_id << endl;
	}

};

int main() {

	Student stu;
    stu.m_name = "李四";
	stu.setName("德玛西亚");
	stu.setID(250);
	stu.showStudent();

	return 0;
}