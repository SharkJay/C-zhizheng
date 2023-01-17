#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main14() {

	int a = 10;
	int* p = &a;

	//定义一个指针用来保存p的地址，p是一个变量，他在内存中也有地址，&p代表p的地址
	/*	1  *与符号结合代表是一个指针变量  
		2 要保存谁的地址,将他的定义形式放在此处
		3 用*p替换掉定义的变量*/
	//*q ，定义形式int* p  ，用*q替换p，就是int*(*q)
	int** q = &p;//q是int**类型，p是int*类型，加&符号就是int**，此时左右两边类型匹配

	//现在要通过q把a的值取出
	/*  p中有a的地址值，所以要通过q得到p中的地址值, * q可以得到p中的地址，p中的值就是他保存的& a，
	**q相当于对p取星花，也就是*p，此时就取到了a的值 */
	printf("%d\n", **q);

	//定义一个指针变量k保存q的地址
	int*** k = &q;
	//通过k取出a的值，***k相当于*p，对p中存的a地址进行取值得到a的值
	printf("%d\n", ***k);

	system("pause");
	return 0;
}