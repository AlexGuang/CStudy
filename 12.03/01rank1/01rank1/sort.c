#include <stdio.h>	
#include< string.h>
/*
		2021��12��3�գ�13��20��
		�����������C����ʵ��ð���㷨��ע�����ڱȴ�С������֮�䣬��������ѭ������Ҫ��һ
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
	printf("��ţ�%d", p->number);
	printf("���֣�%c", p->name);
	printf("������%f", p->score);
	printf("���֣�%c", p->gen);
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
		printf("���ڵ�����a��:%d\n", a[i]);
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