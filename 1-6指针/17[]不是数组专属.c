#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main17() {

	//int a = 10;
	//int* p = &a;
	////p[0] == *(p+0)
	//p[0] = 100;
	//printf("%d\n", *p);//=100

	//那么现在来操作数组
	int arr[] = { 1,2,3,4,5,6,7,8 };
	//遍历，使用指针
	int* p = arr;
	for (int i = 0; i<sizeof(arr) / sizeof(arr[0]); i++) {
		//第一种输出
		//printf("%d ", arr[i]);

		//第二种输出
		//printf("%d ", *(p + i));

		//第三种
		//printf("%d ", p[i]);

		//第四种
		printf("%d ", *(arr + i));//arr是首元素地址，加几个1就是跨过几个元素
	}

	system("pause");
	return 0;
}