#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//���庯���������Ǵ�ӡ����arr����Ԫ��
void PrintfArr(int* p, int len) {
	for (int i = 0; i < len; i++) {
		//p[i]�൱��*(p+i)����ʼΪ*p��ȡ�������������Ԫ�ص�ַ��Ӧ�ĵ�ַ
		//��������i������p+1���������Ԫ���ֿ��һ��Ԫ�صĵ�ַҲ��������1��Ӧ��Ԫ�أ��������еĵڶ���Ԫ�صĵ�ַ
		//*(p+1)ȡ���ڶ���Ԫ�ص�ֵ
		printf("%d ", p[i]);
		//printf("%d ", *(p + i));
	}

	return;
}

int main20() {

	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//������arr����������Ԫ�ص�ַ��arr == &arr[0]
	int len = sizeof(arr) / sizeof(arr[0]);
	PrintfArr(arr, len);

	system("pause");
	return 0;
}