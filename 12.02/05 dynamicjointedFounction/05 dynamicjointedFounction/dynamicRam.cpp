#include <stdio.h>
#include <malloc.h>


void f(int** q)
{
	int a = 5;
	*q = (int*)malloc(sizeof(int));//sizeof(数据类型）返回值是该数据类型所占的字节
	**q = 5;
	return;
}

int main(void)
{

	int* p;
	f(&p);
	printf("%d", *p);
	return 0;
}