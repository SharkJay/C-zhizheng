#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main25() {

	//�����ַ�����
	char a[] = "helloworld";
	char* p = a;//��ָ��p���������׵�ַ

	//printf("%s\n", p);//��pΪ��������ַ����׵�ַ��ʼ�������
	//printf("%s\n", p + 2);//��p+2��ʼ��������ַ����ڶ����ַ���ʼ�����elloworld
	//printf("%c\n", *(p + 2));//ȡp+1�ĵ�ַ��Ӧ��ֵ

	*p = 'm';
	//%s��ӡһ���ַ�����Ҫ�����׸��ַ��ĵ�ַ���������ַ����ʼ��ӡ��ֱ�������ַ�'\0'Ϊֹ
	printf("%s\n", p);

	//�������ǳ���,���ܱ���ֵ��������a ,�ȼ��ڵ�0��Ԫ�صĵ�ַ(��Ԫ�ص�ַ)
	//a++;����Ǵ����

	p++;//����ǿ��Ե�
	*p = 'k';
	printf("%s\n", p);

	system("pause");
	return 0;
}