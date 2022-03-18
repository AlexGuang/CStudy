/*
求1到100之间所有能被3整除的数的和
22点33分2021年11月28日
*/
#include <stdio.h>

int main(void)
{
	int i ;
	int sum = 0;
	int j = 0;
	float avr;
	
	
	for ( i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
		{
			sum += i;
			j++;
			printf("此时的被3整除的数是: %d, 现在的和是: %d\n", i, sum);
		}
	}
	avr = sum / j;
	printf("从1到100所有能被3整除的数的和是 %d,这些数共有:%d 个，这些数的平均值是：%f\n", sum, j, avr);

	return 0;

}