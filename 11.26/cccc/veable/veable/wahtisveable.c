#include <stdio.h>

int main(void)
{
	int i;

	i = 3; //3最终是放在内存中，程序终止之后3所占的空间被释放
	printf("i = %d\n", i);
	return 0;
}