#include <stdio.h>

int main(void)
{
	int x = 3;
	//int a = 3;
	//int b = 5;
	//int c = 6;
	int a, b, c, d, e;
	//int e = 10;
	//int d;
	printf("请输入四个数，并用空格隔开\n");
	scanf("%d %d %d %d" , &a, &b, &c, &e);
	printf("您输入的a,b,c,e 的值分别为%d,%d,%d,%d \n", a, b, c, e);

	while (x > 0)
	{
		if (a < b)
		{
			d = a;
			a = b;
			b = d;
		}
		if (b < c)
		{
			d = b;
			b = c;
			c = d;
		}
		if (c < e)
		{
			d = c;
			c = e;
			e = d;
		}

		x-- ;
	}
	
	

	printf("经过大小排列后的 a,b,c ,e分别是%d,%d,%d,%d\n", a, b, c,e);

	return 0;
	
}

	

