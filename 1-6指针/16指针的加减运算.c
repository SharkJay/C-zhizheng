#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main16() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int* q = (int*)(&arr + 1) - 1;//Ϊʲô��ת��int����Ϊ(&arr+1)�ǵ�ַ��ָ�룩�����Ե�ַ����int*����
	printf("%d\n", *p);//=1
	printf("%d\n", *q);//=10

	//��Ϊp��������arr���ȼ�����Ԫ�ص�ַ&arr[0]����q��&arr[9]��p+1���ǿ��һ��Ԫ�أ�p+9=q�����9��Ԫ������q
	printf("%d\n", q - p);//=9
	system("pause");
	return 0;
}