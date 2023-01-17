#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>

int main() {

	
	int a,b,c;
	a = 10;
	b = 20;
	c = 30;

	//a是int类型，取地址后，&a是int*类型，所以数组num是int* [3]类型
	int* num[] = { &a,&b,&c };
	/*for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		printf("%d\n", *num[i]);
	}*/

	//定义一个指针用来保存数组num首元素的地址
	//num == &num[0] == &(int*)
	int** k = num;
	//通过指针k取出首元素的值
	printf("%d\n", **k);
	//通过k取第二个元素的值
	printf("%d\n", **(k + 1));

	for (int i = 0; i < sizeof(num) / sizeof(num[0]); i++) {
		printf("%d ", **(k + i));
	}
	system("pause");
	return 0;
}