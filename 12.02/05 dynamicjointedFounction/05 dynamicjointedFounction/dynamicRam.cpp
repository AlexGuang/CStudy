#include <stdio.h>
#include <malloc.h>


void f(int** q)
{
	int a = 5;
	*q = (int*)malloc(sizeof(int));//sizeof(�������ͣ�����ֵ�Ǹ�����������ռ���ֽ�
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