/*
��1��100֮�������ܱ�3���������ĺ�
22��33��2021��11��28��
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
			printf("��ʱ�ı�3����������: %d, ���ڵĺ���: %d\n", i, sum);
		}
	}
	avr = sum / j;
	printf("��1��100�����ܱ�3���������ĺ��� %d,��Щ������:%d ������Щ����ƽ��ֵ�ǣ�%f\n", sum, j, avr);

	return 0;

}