#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i;
	for ( i = 1; i < 10; )
	{
		sum = sum + i;
		i = i + 2;
	}

	printf("1��10�����е������ĺ�Ϊ %d", sum);//13579
	return 0;
}