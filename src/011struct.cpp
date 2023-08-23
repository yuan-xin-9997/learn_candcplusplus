#include <iostream>
#include <string>
using namespace std;

// 自定义数据类型，一些类型集合组成的一个类型，定义的时候不可以省略struct
struct Student
{
    // 成员列表
    string name;
    int age;
    int score;
} s3; // 结构体变量创建方式3



int main(int argc, char const *argv[])
{
    
    // 创建具体学生
    // 创建结构体变量的时候，struct关键字可以省略
    // 结构体变量创建方式1
    struct Student s1;
    s1.name = "张三";
    s1.age = 25;
    s1.score = 100;
    cout << "姓名： " << s1.name << "年龄：" << s1.age << "分数:" << s1.score << endl;

    // 结构体变量创建方式2
    struct Student s2 = {"李四", 26, 99};
    cout << "姓名： " << s2.name << "年龄：" << s2.age << "分数:" << s2.score << endl;

    // 结构体变量创建方式3
    s3.name = "王五";
	s3.age = 18;
	s3.score = 80;
    cout << "姓名： " << s3.name << "年龄：" << s3.age << "分数:" << s3.score << endl;

    // 结构体数组
    struct Student arr[3] = {
        {"张三", 18, 100},
        {"李四", 19, 99},
        {"王五", 20, 98}
    };
    arr[2].name = "赵六";
    arr[2].age = 80;
    arr[2].score = 60;
    // 遍历结构体数组
    for (int i = 0; i < 3; i++)
    {
        cout << "姓名： " << arr[i].name << "年龄：" << arr[i].age << "分数:" << arr[i].score << endl;
    }

    // 结构体指针
    struct Student *p = &s1;// 创建结构体指针，struct关键字可以省略
    // 通过指针访问结构体变量中的数据，使用->操作符
    cout << "姓名： " << p->name << "年龄：" << p->age << "分数:" << p->score << endl;
    return 0;
}
