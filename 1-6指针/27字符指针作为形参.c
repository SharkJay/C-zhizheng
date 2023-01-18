#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* pinJie(char*a1,char*a2) {
	//测一下a1数组的有效字符，不包含'\0'
	int len = strlen(a1);
	int i = 0;
	while (*(a2+i) != '\0') {
		*(a1 + len + i) = *(a2 + i);
		i++;
	}
	//在最后添加一个'\0'表示字符串结尾
	*(a1 + len + i) = '\0';
	return a1;
}

int main() {

	//需求：将字符数组arr2拼接到arr1的后面，形成一个新的字符数组
	char arr1[1024] = "hello";
	char arr2[1024] = "world";
	//pinJie(arr1, arr2);
	//打印结果
	printf("%s\n", pinJie(arr1, arr2));

	system("pause");
	return 0;
}