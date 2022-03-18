#include <stdio.h>

int main(void)
{
	//把三个系数保存到计算机中
	int a = 1;
	int b = 3;
	int c = 1;
	double delta; // delt存放的是b*b-4*a*c
	double x1;
	double x2;


	delta = (b * b) - (4 * a * c);

	/*printf("delta= %f\n",delta);

	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该一元二次方程有两个解，x1 = %f, x2 = %f\n", x1, x2);
		两个解
	}
	else if (delta == 0)
	{
		唯一解 
		x1 = -b / (2 * a);
		x2 = x1;
		printf("该一元二次方程只有一个解，x1 = x2 =%f\n", x1);
	}
	else
	{
		printf("这个二元一次方程式没有解");
	}*/
	return 0;
}