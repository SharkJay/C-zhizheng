#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main() {

	
	int a,b,c;
	a = 10;
	b = 20;
	c = 30;

	//a��int���ͣ�ȡ��ַ��&a��int*���ͣ���������num��int* [3]����
	int* num[] = { &a,&b,&c };
	/*for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		printf("%d\n", *num[i]);
	}*/

	//����һ��ָ��������������num��Ԫ�صĵ�ַ
	//num == &num[0] == &(int*)
	int** k = num;
	//ͨ��ָ��kȡ����Ԫ�ص�ֵ
	printf("%d\n", **k);
	//ͨ��kȡ�ڶ���Ԫ�ص�ֵ
	printf("%d\n", **(k + 1));

	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		printf("%d ", **(k + i));
	}
	system("pause");
	return 0;
}