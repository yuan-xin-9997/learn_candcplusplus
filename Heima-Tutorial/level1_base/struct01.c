//
// Created by Administrator on 2023-09-12.
// ˵����C���ԵĽṹ���в��ܴ��ڳ�Ա����

#include <stdio.h>
// ����PI���������ɸ��ģ�
//const double PI = 3.14;
//double PI = 3.14;
#define PI 3.14


struct Circle2{
    // ����
    int m_r; // �뾶

    // ��Ϊ
    // ��ȡԲ���ܳ�����C�����лᱨ��
//    double calculateCircle() const{
//        return PI * m_r * 2;
//    }
};

double calculateCircle(int m_r) {
        return PI * m_r * 2;
    }

int main(){
    struct Circle2 c2;
    c2.m_r = 20;
    printf("Բ���ܳ�Ϊ��%f ", calculateCircle(c2.m_r));

    return 0;
}
