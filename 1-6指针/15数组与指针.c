#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main15() {

	/*int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int* p = arr;//数组名arr等于首元素地址，&arr[0]
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
		//初始p保存首元素arr[0]的地址，p+1相当于arr[0]+1，跨过一个元素到了arr[1]
		printf("%d ", *(p + i));
	}*/

	int arr[10] = { 0 };
	int* p = arr;//p指向数组首元素地址
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	system("pause");
	return 0;
}