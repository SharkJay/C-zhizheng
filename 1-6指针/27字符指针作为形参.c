#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* pinJie(char*a1,char*a2) {
	//��һ��a1�������Ч�ַ���������'\0'
	int len = strlen(a1);
	int i = 0;
	while (*(a2+i) != '\0') {
		*(a1 + len + i) = *(a2 + i);
		i++;
	}
	//��������һ��'\0'��ʾ�ַ�����β
	*(a1 + len + i) = '\0';
	return a1;
}

int main() {

	//���󣺽��ַ�����arr2ƴ�ӵ�arr1�ĺ��棬�γ�һ���µ��ַ�����
	char arr1[1024] = "hello";
	char arr2[1024] = "world";
	//pinJie(arr1, arr2);
	//��ӡ���
	printf("%s\n", pinJie(arr1, arr2));

	system("pause");
	return 0;
}