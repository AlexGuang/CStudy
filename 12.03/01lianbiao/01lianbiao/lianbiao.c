#include <stdio.h>		
#include <malloc.h>
#include <stdlib.h>


struct blockList
{
	int data;
	struct blockList* pNext;
};

struct blockList* creatBlockList(void)
{
	int len;
	int i;
	int val;
	struct blockList* pArr;

	pArr = (struct blockList*)malloc(sizeof(struct blockList));//����һ���ڴ�����ͷ�ڵ�
	if (pArr == NULL)
	{
		printf("�����ַʧ�ܣ������˳���");
		exit(1);
	}
	struct blockList* pTail = pArr;//����β�ڵ㣬 ����β�ڵ�ָ��ָ��ͷ�ڵ�
	pTail->pNext = NULL;//��֤β�ڵ��ָ����Ϊ��

	printf("��������Ҫ���ɵ��������\n");
	scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		printf("������� %d ����\n", i + 1);
		scanf("%d", &val);
		struct blockList* pNew = (struct blockList*)malloc(sizeof(struct blockList));
		if (pNew == NULL)
		{
			printf("����ʧ�ܣ�������ֹ��\n");
			exit(1);
		}

		pNew->data = val;
		pTail->pNext = pNew;

		pNew->pNext = NULL;
		pTail = pNew;


	}
	return pArr;

}

void traverseBlockList(struct blockList* pHead)
{
	
	printf("�������������ǣ�\n");
		struct blockList* pNextb = pHead->pNext;
		
		while (pNextb != NULL)
		{
			printf("%d\n", pNextb->data);
			pNextb = pNextb->pNext;
		}

	/*struct blockList* pNextb;
	pNextb = pHead;
	while (pNextb->pNext != NULL)
	{
		printf("%d\n", pNextb->data);
		pNextb = pNextb->pNext;
	}*/
	
	
	return;
}
/*
* void traverseBlockList(struct blockList* pHead)
{
	if (pHead->pNext == NULL)
	{
		printf("����һ��������\n");
	}
	else
	{
		struct blockList* pNextb;
		pNextb = pHead;
		while (pNextb->pNext != NULL)
		{
			printf("%d", pNextb->data);
			pNextb = pNextb->pNext;
		}
	}

	return;
}
*/

int main(void)

{
	
	struct blockList* pHead = NULL;
	pHead = creatBlockList();
	traverseBlockList(pHead);



	return 0;

}