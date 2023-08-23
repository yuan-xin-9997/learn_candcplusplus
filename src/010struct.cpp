#include <iostream>
using namespace std;

// 自定义数据类型，一些类型集合组成的一个类型
struct Student
{
    // 成员列表
    string name;
    int age;
    int score;
};



int main(int argc, char const *argv[])
{
    
    // 创建具体学生
    struct Student s1;
    s1.name = "张三";
    s1.age = 25;
    s1.score = 100;
    return 0;
}
