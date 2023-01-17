#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main13() {

	//const int a = 10;//不能通过a修改，但可以通过指针修改
	//int* p = &a;
	//*p = 100;
	//printf("%d\n", *p);
	//printf("%d\n", a);

	//int a = 10;
	//const int* p = &a;//此时const修饰*，不能通过p改变指向的a中的内容
	////*p = 100;

	//int a = 1;
	//int b = 2;
	//int* const p = &a;//此时const修饰指针p，p指向的地址不能改变。
	////p = &b;

	int a = 1;
	int b = 3;
	const int* const p = &a;//表示不能修改*p与p，p指向的地址和地址中的内容不能改变
	/**p = 10;
	p = &b;*/

	system("pause");
	return 0;
}