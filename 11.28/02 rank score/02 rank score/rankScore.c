#include <stdio.h>

int main(void)
{
	int score;
	printf("���������ĳɼ������Իس�����\n");
	scanf("%d", &score);
	printf("���ĳɼ�Ϊ��%d\n", score);
	if (score >= 90)
	{
		printf("���ĳɼ�Ϊ����");

	}
	else if (score < 90 && score >= 70)
	{
		printf("���ĳɼ�Ϊ����");


	}
	else if (score < 70 && score >= 60)
	{
		printf("���ĳɼ�Ϊ�ϸ�");
	}
	else
	{
		printf("���ĳɼ�Ϊ���ϸ�");
	}

	return 0;
}