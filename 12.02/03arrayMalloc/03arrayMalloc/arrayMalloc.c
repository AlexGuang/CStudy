#include <stdio.h>
#include <malloc.h>

int main(void)
{	
	int a[5];
	int len;
	int* pArr;
	int i;

	printf("��������Ҫ��ŵ�Ԫ�صĸ�����\n");
	scanf("%d", &len);
	pArr = (int*)malloc(8 * len);
	printf("������ÿһ��Ԫ�أ�\n");
	for ( i = 0; i < len; i++)
	{
		scanf("%d", &pArr[i]);
	}
	printf("����������ǣ�\n");
	for ( i = 0; i < len; i++)
	{
		printf("%d \n", pArr[i]);
	}


	return 0;
}