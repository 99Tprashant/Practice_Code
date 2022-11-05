#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	}
}

void InsertLast(PPNODE head,int no)
{
	PNODE temp = NULL;
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*head==NULL)
	{
		*head=newn;
	}
	else
	{
		temp = *head;
		
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next=newn;
	}
}

void Display(PNODE head)
{
	printf("Elements in linked list are :\n");
	
	while(head!=NULL)
	{
		printf("| %d |->\t",head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
		int iCnt = 0;
		
	while(head!=NULL)
	{
		iCnt++;
		head = head->next;
	}
	return iCnt;
	
}

void DeleteFirst(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head==NULL)
	{
		return;
	}
	else
	{
		temp = *head;
		*head = temp -> next;
		free(temp);
	}
}

void DeleteLast(PPNODE head)
{
	PNODE temp = NULL;
	
	if(*head==NULL)
	{
		return;
	}
	else if((*head)->next==NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		temp= *head;
		while(temp->next->next!=NULL)
		{
			temp = temp->next;
		}
		
		free(temp->next);
		temp->next=NULL;	
	}
}

int main()
{
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	
	Display(first);
	iRet = Count(first);
	printf("Element count is :%d\n",iRet);
	
	InsertLast(&first,111);
	
	Display(first);
	iRet = Count(first);
	printf("Element count is :%d\n",iRet);
	
	DeleteFirst(&first);
	DeleteLast(&first);
	
	Display(first);
	iRet = Count(first);
	printf("Element count is :%d\n",iRet);
	
	return 0;
}