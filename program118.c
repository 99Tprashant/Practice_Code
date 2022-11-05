#include<stdio.h>
#include<stdlib.h>

// Singly Linear Linked list
/*
	InsertFirst
	Insertlast
	InsertAtPosition
	
	DeleteFirst
	Deletelast
	DeleteAtPosition
	
	Display
	Count

*/
struct node
{
	int data;
	struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/*
	1:Allocate memory for node
	2:Initialise the node
	3:Check weather LL is empty or not
	4:If LL is empty the new node is the first node
	5:If LL contains atleast one node in it then store the address of 
	  previous first node in the next pointer of new node
*/
void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn->data = iNo;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{	
	while(Head!=NULL)
	{
		printf("%d\t",Head->data);
		
		Head=Head->next;
	}
	
}

int main()
{
	PNODE First = NULL;			//struct node * First = NULL;
	
	InsertFirst(&First,101);
	InsertFirst(&First,51);
	InsertFirst(&First,21);
	InsertFirst(&First,11);
	
	Display(First);
	return 0;
}

/* Rules
	
	1.Use only dynamic memory allocation
	2.Dont write any technical syntax in main
	3.Dont use any global variable
	4.Be carefull while manipulating the first pointer
	5.Pass the First pointer if the function is not going to modify 
	  the LL(Display,Count).
	6.Pass the adderss of First pointer if the function is going to modify 
	  the LL(InsertFirst,Insertlast,InsertAtPosition,
			DeleteFirst,Deletelast,DeleteAtPosition)


*/
