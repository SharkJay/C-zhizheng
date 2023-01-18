#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//通过指针来实现元素值调换
void swap(int* x, int* y) {
	int k = *x;
	*x = *y;//*x就是取x对应地址中的值
	*y = k;
	printf("*x=%d,*y=%d\n", *x, *y);
	return;
}
int main19() {

	int a = 1;
	int b = 20;
	swap(&a, &b);//将a和b的地址传入swap函数
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}