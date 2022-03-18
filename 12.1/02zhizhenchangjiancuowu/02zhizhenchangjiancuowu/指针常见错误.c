#include <stdio.h>
void swap_2(int* a, int* b)
{
	
	int t = *a;
	*a = *b;
	*b = t;
	
	return;
}

//void swap_1(int a, int b)//不能完成互换
//{
//	int* p = &a;
//	int* q = &b;
//	int t;
//	t = a;
//	*p = b;
//	*q = t;
//	
//	
//	return;
//}


int main(void)
{

	int a = 3;
	int b = 5;
	printf("开始的时候a = %d,b = %d", a, b);

	//swap(a, b);
	swap_2(&a, &b);
	printf("转换完毕后a = %d, b =  %d ", a, b);
	return 0;


	//int* p;
	//int i = 5;

	//p = &i;
	//	printf("%d", *p);
	//return 0;

}