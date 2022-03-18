#include <stdio.h>

int main(void)
{
	double delta = 3;

	if (delta > 0)
		printf("有两个解	\n	");
	else if (delta == 0)
		printf("有一个唯一解\n");
	else
		printf("没有解");
	return 0;
}
