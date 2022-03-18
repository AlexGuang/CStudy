#include <stdio.h>	

int cnt(int* p)
{
	return 0;
}
void sort(int * p)
{

}
int main(void)
{
	int a[6] = {10, 2, 8 , -8, 11, 0};
	cnt(&a);
	int i = 0;
	
	sort(&a);
	for ( i = 0; i < 6; i++)
	{
		printf("%d \n", a[i]);
	}

	return 0;
}