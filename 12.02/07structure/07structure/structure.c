#include <stdio.h>
struct Student
{
	int age;
	float score;
	char sex;
};
int main(void)
{

	//int age;
	//float score;
	//char name[100];
	struct Student st = { 80, 66.6,'F'};//��һ�ָ�ֵ����ʼ���������ͬʱ����ֵ
	struct Student st1;
	st1.age = 10;
	st1.score = 88;
	st1.sex = 'F';

	printf("��һ��ͬѧ�������ǣ�%d,�ɼ��ǣ�%f,�Ա���%c:\n", st.age, st.score, st.sex);
	printf("�ڶ���ͬѧ�������ǣ�%d,�ɼ��ǣ�%f,�Ա���%c:\n", st1.age, st1.score, st1.sex);

	struct Student* pst = &st;//&st ���ܸĳ�st
	pst->age = 99;
	printf("��һ��ͬѧ�������ǣ�%d,�ɼ��ǣ�%f,�Ա���%c:\n", st.age, st.score, st.sex);
	


	return 0;
	
}