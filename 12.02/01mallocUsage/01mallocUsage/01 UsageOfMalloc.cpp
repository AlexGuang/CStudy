/*
	2021��12��2�գ�11��39��
	Malloc ��memory(�ڴ棩allocate(���䣩����д
*/
#include <stdio.h>
#include <malloc.h>

int main(void)
{

	int i = 5;//�������ĸ��ֽڣ�int����̬����
	int* p = (int*)malloc(4);//����ʡ--------12�з�����8���ֽڣ� ��p����Ϊָ������Լ�4���ֽڣ�	
													//malloc���䣨p��ָ����ڴ棩4���ֽڡ���
		
		/*
			1. Ҫʹ��malloc��������������malloc.h���ͷ�ļ�
			2. malloc����ֻ��һ���βΣ������β������ͣ�int)
			3. 4 ��ʾ����ϵͳΪ���������4���ֽڡ�
			4. malloc ������Ϊ���Ƿ����ڴ棬ֻ�ܷ��ص�һ���ֽڵĵ�ַ��
			5. p������ռ���ڴ��Ǿ�̬����ģ� p��ָ����ڴ��Ƕ�̬�����
		*/
	*p = 5;//*p�����ľ���һ��int ������ ֻ����*p������ͱ������ڴ���䷽ʽ��11�е�i 
																		//�����ķ��䷽ʽ��ͬ��
	free(p);// free(p)��ʾ��p��ָ����ڴ���ͷŵ��� p�������ڴ��Ǿ�̬�ģ� �����ɳ���Ա�ֶ��ͷš�
				//p �������ڴ�ֻ����p �������ڵĺ���������ֹʱ����ϵͳ�Զ��ͷš�
	printf("ͬ־�Ǻã�\n	");


	return;
}