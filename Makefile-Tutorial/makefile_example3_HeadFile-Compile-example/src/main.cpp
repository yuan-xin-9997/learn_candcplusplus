//
// Created by Xin Yuan on 2023/9/4.
//
#include<stdio.h>
//#include<iostream>

#include "add.h"
#include "minus.h"
//#include "iostream"

//using namespace std;
int main(){
    int a = 10;
    int b = 6;
    int res1 = add(a, b);
    int res2 = minus(a, b);
//    cout << "a + b =" << res1 << endl;
//    cout << "a - b =" << res2 << endl;
    printf("a + b = %d\n", res1);
    printf("a - b = %d\n", res2);
    return 0;
}