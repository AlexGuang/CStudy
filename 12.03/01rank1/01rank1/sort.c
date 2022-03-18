#include <stdio.h>	
#include< string.h>
/*
		2021年12月3日，13点20分
		这个程序是用C语言实现冒泡算法，注意由于比大小是两者之间，所以最后的循环次数要减一
*/

void sort(int* p, int b	)
{
	int t;

	for ( int i = b; i > 1; i--)
	{
		for ( int j = 0;   j < i-1;   j++)
		{
			if (p[j] >= p[j + 1])
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
}

void prnStruct(struct Student* p)
{
	printf("序号：%d", p->number);
	printf("名字：%c", p->name);
	printf("分数：%f", p->score);
	printf("名字：%c", p->gen);
	printf("\n");
	
	return;
}

struct Student { int number; char name[100]; float score; char gen; };


int main(void)
{
	int a[6] = { 10, 2, 8 , -8, 11, 0 };
	int i = 0;
	for ( i = 0; i < 6; i++)
	{
		printf("现在的数组a是:%d\n", a[i]);
	}
	
	for (i = 0; i < 6; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");

	sort(&a, 6);
	
	for (i = 0; i < 6; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
	struct Student* p;	
	struct Student st1;
	p = &st1;
	st1.gen = 'f';
	//strncpy(st1.name, "Alex");
	st1.number = 1;
	st1.score = 99;
	*p->name = "Alex";


	prnStruct(p);
	
	return 0;
}