//
// Created by Administrator on 2023-09-12.
//


#include "stdio.h"
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
    show_bytes(&c, sizeof(c));
}

int main(){
    show_int(12345);
//    char c = 'a'; // 字符型
    char c[] = "abcde"; // 字符串型
    show_char(c);
    return 0;
}