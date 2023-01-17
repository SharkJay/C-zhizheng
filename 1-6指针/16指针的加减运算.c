#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main16() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* q = (int*)(&arr + 1) - 1;//为什么不转成int，因为(&arr+1)是地址（指针），所以地址都是int*类型
	printf("%d\n", *p);//=1
	printf("%d\n", *q);//=10

	//因为p是数组名arr，等价于首元素地址&arr[0]，而q是&arr[9]，p+1就是跨过一个元素，p+9=q，跨过9个元素来到q
	printf("%d\n", q - p);//=9
	system("pause");
	return 0;
}