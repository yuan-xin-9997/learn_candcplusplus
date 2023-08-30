//
// Created by Xin Yuan on 2023/8/30.
//
#include "functions.h"

int factorial(int n)
{
	if (n==1)
		return 1;
	else
		return n * factorial(n-1);
}