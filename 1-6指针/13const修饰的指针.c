#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main13() {

	//const int a = 10;//����ͨ��a�޸ģ�������ͨ��ָ���޸�
	//int* p = &a;
	//*p = 100;
	//printf("%d\n", *p);
	//printf("%d\n", a);

	//int a = 10;
	//const int* p = &a;//��ʱconst����*������ͨ��p�ı�ָ���a�е�����
	////*p = 100;

	//int a = 1;
	//int b = 2;
	//int* const p = &a;//��ʱconst����ָ��p��pָ��ĵ�ַ���ܸı䡣
	////p = &b;

	int a = 1;
	int b = 3;
	const int* const p = &a;//��ʾ�����޸�*p��p��pָ��ĵ�ַ�͵�ַ�е����ݲ��ܸı�
	/**p = 10;
	p = &b;*/

	system("pause");
	return 0;
}