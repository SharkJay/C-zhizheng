#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int num;
int* getnum() {
	srand(time(NULL));
	int num = rand();
	return &num;
}

int main21() {

	int* p = getnum();
	printf("%d\n", *p);
	system("pause");
	return 0;
}