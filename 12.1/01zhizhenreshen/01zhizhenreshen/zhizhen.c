/*
	1. ָ����ǵ�ַ����ַ����ָ��
	2. ��ַ�����ڴ浥Ԫ�ı��
	3. ָ����� �Ǵ�ŵ�ַ�ı���
	4. ָ���ָ�������������ͬ�ĸ������Ҫע�⣺ ͨ����������ʱ�����ǻ��ָ�������Ϊָ�룬
																ʵ�����ǵĺ��岢��һ����
*/
#include <stdio.h>

int main(void)
{

	int * p;// p�Ǳ��������� �� int* ��ʾp������ŵ���int �����ĵ�ַ
			// int*p; ����ʾ������һ�����ֽ���*p�ı���
			// int*p; Ӧ���������⣺ p�Ǳ������� p����������������int*����
			//			��νint*�����;��Ǵ��int������ַ������ 
	int i = 3; 
	p = &i; 
	/* 
	    1.  p������i�ĵ�ַ�� ���pָ����i;
		2.	p ���� i��i Ҳ����p, ��׼ȷ��˵���޸�p��ֵ��Ӱ��i��ֵ���޸�i��ֵҲ��Ӱ��p��ֵ
		3.  ���һ������ָ����ĳ����ͨ������ ��*ָ����� ����ȫ��ͬ�� ��ͨ����
					���ӣ�
						���p��һ��ָ�����������p�������ͨ����i�ĵ�ַ
						��pָ������ͨ����i
						*p ����ȫ��ͬ��i
						����˵�� �����г���*p�ĵط��������滻��i
								�����г��� i�ĵط��������滻��*p
						*p������p������Ϊ��ַ�ı��� 
	*/
	double* q;
	double f = 0.3;
	q = &f;



	return 0;
}