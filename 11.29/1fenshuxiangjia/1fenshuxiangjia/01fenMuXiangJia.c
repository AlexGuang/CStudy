#include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;

	for (i = 1; i < 101; i++)
	{

		sum = sum + (1 / (float)(i));//sum = sum + 1.0 / i;�������
		printf("%d \n", i);
	}
	printf("���ĺ��ǣ�%f", sum);

	return 0;

}