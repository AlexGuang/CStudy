#include <stdio.h>
/*
		��f����������Ϻ�i�ĵ�ַ�ᱻ�ͷţ���Ȼi ������û�иı䣬������������Ӧ��û��Ȩ��
		����i ��ֵ
*/
void f(int** q)
{
	int i = 5;
	// *q �ȼ���p q��**q�����ȼ���p
	*q = &i;
	return;
}

int main(void)
{
	int* p;
	f(&p);
	

	printf("%d", *p);// ������﷨û�����⣬���߼��������⣬
	return 0;
}