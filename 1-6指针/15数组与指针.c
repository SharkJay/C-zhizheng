#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main15() {

	/*int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int* p = arr;//������arr������Ԫ�ص�ַ��&arr[0]
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]);i++) {
		//��ʼp������Ԫ��arr[0]�ĵ�ַ��p+1�൱��arr[0]+1�����һ��Ԫ�ص���arr[1]
		printf("%d ", *(p + i));
	}*/

	int arr[10] = { 0 };
	int* p = arr;//pָ��������Ԫ�ص�ַ
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		*(p + i) = i;
		printf("%d ", *(p + i));
	}

	system("pause");
	return 0;
}