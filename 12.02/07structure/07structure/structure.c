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
	struct Student st = { 80, 66.6,'F'};//第一种赋值，初始化，定义的同时赋初值
	struct Student st1;
	st1.age = 10;
	st1.score = 88;
	st1.sex = 'F';

	printf("第一个同学的年龄是：%d,成绩是：%f,性别是%c:\n", st.age, st.score, st.sex);
	printf("第二个同学的年龄是：%d,成绩是：%f,性别是%c:\n", st1.age, st1.score, st1.sex);

	struct Student* pst = &st;//&st 不能改成st
	pst->age = 99;
	printf("第一个同学的年龄是：%d,成绩是：%f,性别是%c:\n", st.age, st.score, st.sex);
	


	return 0;
	
}