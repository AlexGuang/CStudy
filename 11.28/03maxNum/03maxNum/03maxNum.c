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
	printf("�������ĸ��������ÿո����\n");
	scanf("%d %d %d %d" , &a, &b, &c, &e);
	printf("�������a,b,c,e ��ֵ�ֱ�Ϊ%d,%d,%d,%d \n", a, b, c, e);

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
	
	

	printf("������С���к�� a,b,c ,e�ֱ���%d,%d,%d,%d\n", a, b, c,e);

	return 0;
	
}

	

