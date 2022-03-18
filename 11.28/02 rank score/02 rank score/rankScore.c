#include <stdio.h>

int main(void)
{
	int score;
	printf("请输入您的成绩，并以回车结束\n");
	scanf("%d", &score);
	printf("您的成绩为：%d\n", score);
	if (score >= 90)
	{
		printf("您的成绩为优秀");

	}
	else if (score < 90 && score >= 70)
	{
		printf("您的成绩为良好");


	}
	else if (score < 70 && score >= 60)
	{
		printf("您的成绩为合格");
	}
	else
	{
		printf("您的成绩为不合格");
	}

	return 0;
}