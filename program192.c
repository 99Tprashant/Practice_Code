#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> data = no;
	newn -> next = NULL;
	
	if(*Head != NULL)
	{
		newn -> next = *Head;
	}	
	*Head = newn;
}

void Display(PNODE Head)
{
	printf("Elements of linked list are: \n");
	
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head -> next;
	}
	printf("NULL \n");
}

int MiddleElement(PNODE Head,int iNo)
{
	int i = 0;
	int iSize = 0;
	PNODE temp = Head;
	
	while(Head != NULL)
	{
		iSize++;
		Head = Head->next;
	}
	Head = temp;
	
	for(i = 0; i <iSize/2; i++)
	{
		Head = Head->next;
	}
		
	return Head->data;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
		
	InsertFirst(&First,60);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = MiddleElement(First,20);
	printf("Middle element is : %d \n",iRet);
	
	return 0;
}