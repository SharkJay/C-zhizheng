#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main25() {

	//定义字符数组
	char a[] = "helloworld";
	char* p = a;//用指针p接收数组首地址

	//printf("%s\n", p);//以p为输出，从字符串首地址开始进行输出
	//printf("%s\n", p + 2);//以p+2开始输出，从字符串第二个字符开始输出，elloworld
	//printf("%c\n", *(p + 2));//取p+1的地址对应的值

	*p = 'm';
	//%s打印一个字符串，要的是首个字符的地址，从这个地址往后开始打印，直到遇到字符'\0'为止
	printf("%s\n", p);

	//数组名是常量,不能被赋值，数组名a ,等价于第0个元素的地址(首元素地址)
	//a++;这个是错误的

	p++;//这个是可以的
	*p = 'k';
	printf("%s\n", p);

	system("pause");
	return 0;
}