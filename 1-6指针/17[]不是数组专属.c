#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main17() {

	//int a = 10;
	//int* p = &a;
	////p[0] == *(p+0)
	//p[0] = 100;
	//printf("%d\n", *p);//=100

	//��ô��������������
	int arr[] = { 1,2,3,4,5,6,7,8 };
	//������ʹ��ָ��
	int* p = arr;
	for (int i = 0; i<sizeof(arr) / sizeof(arr[0]); i++) {
		//��һ�����
		//printf("%d ", arr[i]);

		//�ڶ������
		//printf("%d ", *(p + i));

		//������
		//printf("%d ", p[i]);

		//������
		printf("%d ", *(arr + i));//arr����Ԫ�ص�ַ���Ӽ���1���ǿ������Ԫ��
	}

	system("pause");
	return 0;
}