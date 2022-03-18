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

	pArr = (struct blockList*)malloc(sizeof(struct blockList));//分配一块内存来做头节点
	if (pArr == NULL)
	{
		printf("分配地址失败，即将退出。");
		exit(1);
	}
	struct blockList* pTail = pArr;//声明尾节点， 并让尾节点指针指向头节点
	pTail->pNext = NULL;//保证尾节点的指针域为空

	printf("请输入想要生成的链表块数\n");
	scanf("%d", &len);

	for (i = 0; i < len; i++)
	{
		printf("请输入第 %d 个数\n", i + 1);
		scanf("%d", &val);
		struct blockList* pNew = (struct blockList*)malloc(sizeof(struct blockList));
		if (pNew == NULL)
		{
			printf("分配失败，程序终止！\n");
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
	
	printf("这个链表的数据是：\n");
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
		printf("这是一个空链表\n");
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