#include <stdio.h>

int main(void)
{
	//������ϵ�����浽�������
	int a = 1;
	int b = 2;
	int c = 3;
	float delta; // delt��ŵ���b*b-4*a*c
	float x1;
	float x2;


	delta = b * b - 4 * a * c;
		if (delta > 0)
		{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("��һԪ���η����������⣬x1 = %f, x2 = %f\n", x1, x2);
				//������
		}
		else if (delta == 0)
		{
			//Ψһ�� 
			x1 = -b / 2*a;
				x2 = x1;
				printf("��һԪ���η���ֻ��һ���⣬x1 = x2 =%f\n", x1);
		}
		else
		{
			printf("�����Ԫһ�η���ʽû�н�");
		}
	return 0;
}