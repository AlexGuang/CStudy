/*
����������ͨ�����䶯̬�ڴ潨��һ���Խṹ��Ϊ�����洢��Ԫ��ѧ����Ϣ����ϵͳ��
������ѧ���ĳɼ���������
����������������ѧ����Ϣ�����룬 ѧ����Ϣ������Լ���ѧ���ɼ�������
������Ҫע�� ���䶯̬�����ַʱ���ṹ��ĵ�ַҪת���ɶ�Ӧ�ṹ��ָ��
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
		printf("��%dλѧ������Ϣ��", i + 1);
		printf("���䣺%d,", pArr[i].age);
		printf("���֣�%s,", pArr[i].name);
		printf("�ɼ���%f\n", pArr[i].score);
	}
	return;
}
void iptStudent(struct Student* pArr,int len)
{
	int i;
	
	for ( i = 0; i < len; i++)
	{
		printf("�������%d��ѧ������Ϣ��\n", i + 1);
		printf("������ѧ��������:\n");
		scanf("%d", &pArr[i].age);
		printf("������ѧ��������:\n");
		scanf("%s", pArr[i].name);
		printf("������ѧ���ĳɼ�:\n");
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

	printf("������ѧ���ĸ�����\n");
	printf("len =");
	scanf("%d", &len);
	printf("һ���� %d ��ѧ��\n", len);


	pArr = (struct Student*)malloc(len * sizeof(struct Student));//�ṹ��ָ��ǿ��ת��
	/*
		��malloc�������䶯̬�ڴ棬���ݴ洢�ڶ��ϣ�len �����������Ԫ�ظ�����sizeof �������Կ���
		�ҳ��ṹ���ռ�ڴ��С
	*/


	iptStudent(pArr, len);
	prtStudent(pArr, len);
	printf("�����ڿ�ʼҪ������\n");
	sortScore(pArr, len);
	prtStudent(pArr, len);


	return 0;

}