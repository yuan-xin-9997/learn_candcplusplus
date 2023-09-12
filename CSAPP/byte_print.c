//
// Created by Administrator on 2023-09-12.
//


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
    show_bytes((byte_pointer)&c, sizeof(c));
}

int main(){
    show_int(12345);
//    char c = 'a'; // 字符型
    char c[] = "abcde"; // 字符串型，注意变量的定义区别
    show_char(c);
    show_bytes((byte_pointer)&c, strlen(c));
    show_bytes((byte_pointer)&c, sizeof(c));

//    const char *s="abcde";
    char *s="abcde";
    show_bytes((byte_pointer)s, strlen(s));

    return 0;
}