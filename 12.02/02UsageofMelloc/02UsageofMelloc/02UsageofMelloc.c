#include <stdio.h>	
#include <malloc.h>


void f(int * p) 
{
	*p = 200;
	return;
}

int main(void)
{
	int* p = (int*)malloc(sizeof(int));// sizeof(int)����ֵ��int��ռ���ֽ���.
	*p = 10;


	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);


	return 0;
}