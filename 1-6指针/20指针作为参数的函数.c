#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//定义函数，功能是打印数组arr所有元素
void PrintfArr(int* p, int len) {
	for (int i = 0; i < len; i++) {
		//p[i]相当于*(p+i)，初始为*p，取到传入的数组首元素地址对应的地址
		//随着索引i自增，p+1，代表从首元素又跨过一个元素的地址也就是索引1对应的元素，在数组中的第二个元素的地址
		//*(p+1)取出第二个元素的值
		printf("%d ", p[i]);
		//printf("%d ", *(p + i));
	}

	return;
}

int main20() {

	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//数组名arr代表数组首元素地址，arr == &arr[0]
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintfArr(arr, len);

	system("pause");
	return 0;
}