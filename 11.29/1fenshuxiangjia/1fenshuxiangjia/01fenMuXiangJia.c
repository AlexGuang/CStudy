#include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i < 101; i++)
	{

		sum = sum + (1 / (float)(i));//sum = sum + 1.0 / i;这个更好
		printf("%d \n", i);
	}
	printf("最后的和是：%f", sum);

	return 0;

}