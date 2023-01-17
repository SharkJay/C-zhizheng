#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main04() {

	int a = 10;
	int* p = &a;

	*p = 100;
	printf("%d\n", a);

	system("pause");
	return 0;
}