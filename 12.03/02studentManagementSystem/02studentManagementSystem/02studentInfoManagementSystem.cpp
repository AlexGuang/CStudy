/*
这个程序可以通过分配动态内存建立一个以结构体为基本存储单元的学生信息管理系统，
并根据学生的成绩进行排序；
本程序三个函数，学生信息的输入， 学生信息的输出以及对学生成绩的排序
本程序要注意 分配动态数组地址时，结构体的地址要转换成对应结构体指针
*/
#include<stdio.h>	
#include<malloc.h>

struct Student
{
	int age;	
	float score;
	char name[100];
};
void prtStudent(struct Student *pArr, int len)
{
	int i;
	
	for ( i = 0; i < len; i++)
	{
		printf("第%d位学生的信息：", i + 1);
		printf("年龄：%d,", pArr[i].age);
		printf("名字：%s,", pArr[i].name);
		printf("成绩：%f\n", pArr[i].score);
	}
	return;
}
void iptStudent(struct Student* pArr,int len)
{
	int i;
	
	for ( i = 0; i < len; i++)
	{
		printf("请输入第%d个学生的信息：\n", i + 1);
		printf("请输入学生的年龄:\n");
		scanf("%d", &pArr[i].age);
		printf("请输入学生的名字:\n");
		scanf("%s", pArr[i].name);
		printf("请输入学生的成绩:\n");
		scanf("%f", &pArr[i].score);
	}
	return;

}
void sortScore(struct Student* pArr, int len) 
{
	struct Student t;
	for (int i = len; i > 1; i--)
	{
		for ( int j = 0; j <len - 1 ; j++)
		{
			if (pArr[j].score< pArr[j + 1].score)
			{
				t = pArr[j];
				pArr[j ] = pArr[j + 1];
				pArr[j + 1] = t;

			}
		}
	}

	return;
}
int main(void)
{
	int len;
	int i;
	struct Student* pArr;

	printf("请输入学生的个数：\n");
	printf("len =");
	scanf("%d", &len);
	printf("一共有 %d 名学生\n", len);


	pArr = (struct Student*)malloc(len * sizeof(struct Student));//结构体指针强行转化
	/*
		用malloc函数分配动态内存，数据存储在堆上，len 代表了数组的元素个数，sizeof 函数可以快速
		找出结构体的占内存大小
	*/


	iptStudent(pArr, len);
	prtStudent(pArr, len);
	printf("我现在开始要排名了\n");
	sortScore(pArr, len);
	prtStudent(pArr, len);


	return 0;

}