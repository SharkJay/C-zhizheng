#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

//ͨ��ָ����ʵ��Ԫ��ֵ����
void swap(int* x, int* y) {
	int k = *x;
	*x = *y;//*x����ȡx��Ӧ��ַ�е�ֵ
	*y = k;
	printf("*x=%d,*y=%d\n", *x, *y);
	return;
}
int main19() {

	int a = 1;
	int b = 20;
	swap(&a, &b);//��a��b�ĵ�ַ����swap����
	printf("a=%d,b=%d\n", a, b);
	system("pause");
	return 0;
}