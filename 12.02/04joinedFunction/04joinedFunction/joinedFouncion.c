#include <stdio.h>
/*
		当f函数运行完毕后，i的地址会被释放，虽然i 的内容没有改变，但是其他函数应该没有权限
		访问i 的值
*/
void f(int** q)
{
	int i = 5;
	// *q 等价于p q和**q都不等价于p
	*q = &i;
	return;
}

int main(void)
{
	int* p;
	f(&p);
	

	printf("%d", *p);// 本语句语法没有问题，但逻辑上有问题，
	return 0;
}