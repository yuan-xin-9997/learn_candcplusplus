//
// Created by Xin Yuan on 2023/8/27.
//
#include "iostream"
#include "string"
using namespace std;


// 菜单定义
void showMenu(){
    cout << "***************************" << endl;
    cout << "*****  1.添加联系人  ******" << endl;
    cout << "*****  2.显示联系人  ******" << endl;
    cout << "*****  3.删除联系人  ******" << endl;
    cout << "*****  4.查找联系人  ******" << endl;
    cout << "*****  5.修改联系人  ******" << endl;
    cout << "*****  6.清空联系人  ******" << endl;
    cout << "*****  0.退出通讯录  ******" << endl;
    cout << "***************************" << endl;
}



int main()
{
     int select = 0; //创建用户选择变量

    // 菜单调用
    showMenu();

    while (true){
        cout << "请输入您的选择：" << endl;
        cin >> select; //用户选择菜单项

        switch (select) {
            case 1: //添加联系人
                break;
            case 2: //显示联系人
                break;
            case 3: //删除联系人
                break;
            case 4: //查找联系人
                break;
            case 5: //修改联系人
                break;
            case 6: //清空联系人
                break;
            case 0: //退出通讯录
                cout << "欢迎下次使用" << endl;
                return 0;
            default:
                break;
        }
    }
    return 0;
}