#include <stdio.h>
#include <malloc.h>

int main(void)
{	
	int a[5];
	int len;
	int* pArr;
	int i;

	printf("请输入泥要存放的元素的个数：\n");
	scanf("%d", &len);
	pArr = (int*)malloc(8 * len);
	printf("请输入每一个元素：\n");
	for ( i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}
	printf("您输入的数是：\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d \n", pArr[i]);
	}


	return 0;
}