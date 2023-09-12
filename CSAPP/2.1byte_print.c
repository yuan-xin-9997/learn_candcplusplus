//
// Created by Administrator on 2023-09-12.
// 小端模式、大端模式、数据类型字符编码


#include "stdio.h"
#include "string.h"
typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, int len){
    int i;
    for (i = 0; i < len; i++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer)&x, sizeof(x));
}

void show_char(char c[]){
    printf("c = %s \n", c);
    show_bytes((byte_pointer)&c, sizeof(c));
}

int main(){
    // 输出整型的字符编码
    // 小端模式：最低有效字节存储在内存的低地址
    // 在这个案例中，十进制12345的十六进制为00003039，最低有效字节为39，在内存中存储顺序为39 30 00 00（内存地址增大）
    show_int(12345); // 整型占用4个字节，输出39 30 00 00，其中123456的十六进制为00003039（MacBook Pro 2021 M1 ARM架构芯片，小端模式）

    // 输出字符型的字符编码
    char c = 'a'; // 字符型
    show_bytes((byte_pointer)&c, sizeof(c));  // 输出字符'a'的字节编码为61（十六进制），转换为十进制=97（字母a的ASCII）
    c = 'b';
    show_bytes((byte_pointer)&c, sizeof(c));
    c = 'd';
    show_bytes((byte_pointer)&c, sizeof(c));
    c = 'e';
    show_bytes((byte_pointer)&c, sizeof(c));

    // 输出字符串串型字符编码
    char s[] = "abcde"; // 字符串型，注意变量的定义区别
    char * p = &s;
//    printf(p);
    printf("address of s = %d\n", p);
    show_char(s);
    printf("strlen(s)=%d\n", strlen(s));
    printf("sizeof(s)=%d\n", sizeof(s));
    show_bytes((byte_pointer)&s, strlen(s));
    show_bytes((byte_pointer)&s, sizeof(s));

    // 输出字符型的字符编码（通过指针）
//    const char *s="abcde";
    char *sp="abcde"; // TOOD：字符串数组的大小是如何确定的，为何这里是8个字节，上面char s[]="abcde"是6个字节的长度
    printf("strlen(s)=%d\n", strlen(sp));
    printf("sizeof(s)=%d\n", sizeof(sp));
    show_bytes((byte_pointer)sp, strlen(sp));
    show_bytes((byte_pointer)sp, sizeof(sp));

    return 0;
}