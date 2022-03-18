# include <stdio.h>

//定义可一个链表节点的数据类型
struct Node
{
	int data;
	struct Node * pNext; 
};


int main(void)
{
	struct Node * pHead; //pHead用来存放链表头结点的地址

	pHead = CreateList();
	TraverseList(pHead);
	
	return 0;
}