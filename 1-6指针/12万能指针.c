#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main12() {

	////void b; 不可以定义void类型的变量,因为编译器不知道给变量分配多大的空间
	//    //但是可以定义void *类型,因为指针都是4个字节
	//int  a = 10;
	//short b = 10;
	//void* p = (void*)&a;//万能指针可以保存任意的地址
	//void* q = (void*)&b;
	////printf("%d\n", *p);//err  p是void*,不知道取几个字节的大小
	//printf("%d\n", *(int*)p);// *(  (int *)地址)

	//在使用时,对一个表达式取*,就会对表达式减一级*,如果对表达式取&,就会加一级*
	/*不同类型的指针变量, 取指针指向的内容的宽度
		指针的宽度 = sizeof(将指针变量与指针变量最近的 * 拖黑, 剩下的类型)*/
	int a = 10;
	void* p = (void*) & a;//等式左边p的类型为void*，等式右边&a的类型为int*，左右类型要配对，所以右边要转换,使用void*
	printf("%d\n", *(int*)p);//p是void *类型，打印时要类型转换，a是int类型，4字节,所以p的指针类型要取4个字节，指针类型就转换成int*
	system("pause");
	return 0;
}