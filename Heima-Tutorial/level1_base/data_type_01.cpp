//
// Created by Administrator on 2023-09-12.
//
#include "iostream"
using namespace std;

int main() {
    // �����������͵�ռ�ÿռ�

    // ����
	cout << "short ������ռ�ڴ�ռ�Ϊ�� " << sizeof(short) << endl;
	cout << "int ������ռ�ڴ�ռ�Ϊ�� " << sizeof(int) << endl;
	cout << "long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long) << endl;
	cout << "long long ������ռ�ڴ�ռ�Ϊ�� " << sizeof(long long) << endl;

    // ������
    float f1 = 3.14f;
	double d1 = 3.14;
	cout << f1 << endl;
	cout << d1<< endl;
	cout << "float  sizeof = " << sizeof(f1) << endl;
	cout << "double sizeof = " << sizeof(d1) << endl;
	//��ѧ������
	float f2 = 3e2; // 3 * 10 ^ 2
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;  // 3 * 0.1 ^ 2
	cout << "f3 = " << f3 << endl;

    // �ַ���
	char ch = 'a';
	cout << ch << endl;
	cout << sizeof(char) << endl;
	//ch = "abcde"; //���󣬲�������˫����
	//ch = 'abcde'; //���󣬵�������ֻ������һ���ַ�
	cout << (int)ch << endl;  //�鿴�ַ�a��Ӧ��ASCII��
	ch = 98; //����ֱ����ASCII���ַ��ͱ�����ֵ
	cout << ch << endl;

    // �ַ�����  ע����ַ��͵�����
    char str1[] = "hello world";
//    char str2[] = 'hello world'; // �������õ�����
	cout << str1 << endl;


	return 0;
}
