#include <iostream>
using namespace std;
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "函数内部交换后：a="<<a<<", b="<<b<<endl;
}
void swap02(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void bubbleSort(int * arr, int len){
     for (int i = 0; i < len - 1; i++)
     {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
     }
     
}
void printArrary(int arr[], int len){
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] <<endl;
    }
    
}
int main(int argc, char const *argv[])
{
    cout << "指针" <<endl;
    // 1. 定义指针
    int a = 100;
    int *p;
    p = &a;
    cout << "a 的地址为：" << &a << endl;
    cout << "指针p为：" << p << endl;

    // 2.使用指针
    *p = 1000; // 解引用，拿到指针记录的内存上的数据
    cout << "a="<<a<<endl;
    cout << "*p="<<*p<<endl;

    // 指针所占的内存空间
    int b = 10;
    int *p1 = &b;
    cout << "sizeof (int *) = " << sizeof(p1) << endl;
    cout << "sizeof (int *) = " << sizeof(float *) << endl;
    cout << "sizeof (int *) = " << sizeof(double *) << endl;
    cout << "sizeof (int *) = " << sizeof(char *) << endl;

    // 空指针
    int *p2 = NULL;
    // *p2 = 100;

    // 野指针
    int *p3 = (int *)0x1100;
    // cout << "野指针： " << *p3 << endl;
    // system("pause");

    // 指针常量、常量指针

    // 指针和数组: 利用指针访问数组中的元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "第一个元素为：" << arr[0] << endl;
    int *p4 = arr;// 指向首地址
    cout << "利用指针访问第一个元素为：" << *p4 << endl;
    p4++; // 内存地址+4个字节，即让指针向后偏移
    cout << "利用指针访问第二个元素为：" << *p4 << endl;
    int *p5 = arr;//指向首地址
    // 利用指针遍历数组
    for (int i = 0; i < 11; i++)
    {
        /* code */
        cout << *p5 << endl;
        p5++;
    }

    // 指针和函数
    // 值传递
    int a1 = 10;
    int b1 = 20;
    swap01(a1, b1);
    cout << "a1="<<a1<<", b1="<<b1<<endl;
    // 地址传递（传引用）
    swap02(&a1, &b1);
    cout << "a1="<<a1<<", b1="<<b1<<endl;

    // 封装一个函数，利用冒泡排序，实现对整型数组的升序排序
    int arr2[10] = { 4,3,6,9,1,2,10,8,7,5 };
    cout << "整个数组所占内存空间为： " << sizeof(arr2) << endl;
	cout << "每个元素所占内存空间为： " << sizeof(arr2[0]) << endl;
	cout << "数组的元素个数为： " << sizeof(arr2) / sizeof(arr2[0]) << endl;
    cout << "数组首地址为： " << arr2 << endl;
	cout << "数组中第一个元素地址为： " << &arr2[0] << endl;
	cout << "数组中第二个元素地址为： " << &arr2[1] << endl;

    int len = sizeof(arr2) / sizeof(arr2[0]);
    cout<<"排序前数组"<<endl;
    printArrary(arr2, len);
    cout << "数组长度："<< len<<endl;
    bubbleSort(arr2, len);
    cout<<"排序后数组"<<endl;
    printArrary(arr2, len);

    return 0;
}
 