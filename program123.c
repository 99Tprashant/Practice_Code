#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node * next;
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
		*head = newn;
	}
	else
	{
		newn -> next = *head;
		*head = newn;
	}
	
}

void InsertLast(PPNODE head,int no)
{
	PNODE newn = NULL;
	PNODE temp = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*head==NULL)
	{
		*head = newn;
	}
	else
	{
		temp = *head;
		while(temp->next!=NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
		
	}
}

void Display(PNODE head)
{
	printf("Elements in linked list are:\n");
	
	while(head!=NULL)
	{
		printf("|%d|-> ",head->data);
		head = head -> next;
	}
	printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;
	
	while(head!=NULL)
	{
		iCnt++;
		head = head -> next;
	}
	return iCnt;
}

void DeleteFirst(PPNODE head,int no)
{}

void DeleteLast(PPNODE head,int no)
{}

void InsertAtPos(PPNODE head,int no, int pos)
{}

void DeleteAtPos(PPNODE head,int pos)
{}

int main()
{
	
	PNODE first = NULL;
	int iRet = 0;
	
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	
	InsertLast(&first,51);
	InsertLast(&first,101);
	
	Display(first);
	iRet = Count(first);
	printf("Elements in Linked list is: %d\n",iRet);
	
	return 0;
}