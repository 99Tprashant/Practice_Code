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

int SearchLastOccurance(PNODE Head,int iNo)
{
	int iPos = 1;
	int iCnt = 0;
	
	while(Head != NULL)
	{
		
		if(Head->data == iNo)
		{
			iCnt = iPos;
		}
		iPos++;
		Head = Head->next;
	}
	return iCnt;
}

int main()
{
	PNODE First = NULL;
	int iRet = 0;
		
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	
	iRet = SearchLastOccurance(First,20);
	printf("LastOccurance is at index : %d \n",iRet);
	return 0;
}