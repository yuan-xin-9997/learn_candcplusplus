//
// Created by Administrator on 2023-09-12.
// ˵��struct��class��ͬ�ĵط������������˵����struct��class��c++�м���û�����𣨳���Ĭ�Ϸ���Ȩ�ޣ�

#include "iostream"
using namespace std;

//const double PI = 3.1415926535758;
const double PI = 3.14;

//��װһ��Բ�࣬��Բ���ܳ�
//class�������һ���࣬������ŵ�������
class Circle1{
public: // ����Ȩ��   ����Ȩ��
    // ����
    int m_r; // �뾶

    // ��Ϊ
    // ��ȡԲ���ܳ�
    double calculateCircle() const{
        return PI * m_r * 2;
    }
};

struct Circle2{
    // ����
    int m_r; // �뾶

    // ��Ϊ
    // ��ȡԲ���ܳ�
    double calculateCircle() const{
        return PI * m_r * 2;
    }
};

int main(){
    // ͨ��Բ�ഴ��Բ�Ķ���
    // c1���Ǿ����Բ
    class Circle1 c1;
    c1.m_r = 10;
    cout << "Բ���ܳ�Ϊ��"  << c1.calculateCircle() << endl;

    struct Circle2 c2;
    c2.m_r = 20;
    cout << "Բ���ܳ�Ϊ��"  << c2.calculateCircle() << endl;
}