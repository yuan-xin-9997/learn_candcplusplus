#include <stdio.h>
/*
    多行注释
    这是C语言的一个多行注释
*/
int main()
{
    // 这是C语言的一个单行注释
    printf("Hello, World.\n");
    // return 0;

    //下面演示C语言的变量声明方式和赋值
    int num = 100;
    int a,b,c;
    a=1;
    b=2;
    c=3;
    printf("%d\n", num);
    printf("%d\n", a);

    // C语言的数据类型
    // 基本类型
    char sex='M'; //字符型，占用1个字节
    int heigh = 18; // 整型，占用2个字节
    float price = 11.1; //单精度浮点型，占用4个字节
    double pi = 3.14159265; // 双精度浮点型，占用8个字节

    // 格式化输出语句
    printf("%d\n", num); // %d 带符号的十进制整数
    printf("%c\n", sex); // %c 单个字符串
    printf("%f\n", price);  // %f 6位小数
    printf("%f\n", pi);
    printf("%s\n", "你好"); // %s 字符串

    // 不可改变的常量
    
}