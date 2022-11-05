#include "Header163.h"

DoublyCLL::DoublyCLL()
{
	Head = NULL;
	Tail = NULL;
	CountNode = 0;	
}

void DoublyCLL::InsertFirst(int iNo)
{
	PNODE newn = NULL;
	newn = new NODE;

	newn -> data = iNo;
	newn -> Next = NULL;
	newn -> Prev = NULL;
	
	if(CountNode == 0)  // if((Headd == NULL)&&(Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> Next = Head;
		Head -> Prev = newn;
		Head = newn;
	}
	
	Head -> Prev = Tail;
	Tail -> Next = Head;
	
	CountNode++;
}

void DoublyCLL::InsertLast(int iNo)
{
	PNODE newn = NULL;
	newn = new NODE;

	newn -> data = iNo;
	newn -> Next = NULL;
	newn -> Prev = NULL;
	
	if(CountNode == 0)  // if((Headd == NULL)&&(Tail == NULL))
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		Tail -> Next = newn;
		newn -> Prev = Tail;
		
		Tail = newn;	
	}
	
	Head -> Prev = Tail;
	Tail -> Next = Head;
	
	CountNode++;
}

void DoublyCLL::InsertAtPos(int iNo, int iPos)
{
	if((iPos < 1) || (iPos > CountNode+1))
	{
		cout<<"Invalide position \n";
		return;
	}
	
	else if(iPos == 1 )
	{
		InsertFirst(iNo);
	}
	
	else if(iPos == CountNode+1)
	{
		InsertLast(iNo);
	}
	else
	{
		PNODE newn = NULL;
		newn = new NODE;

		newn -> data = iNo;
		newn -> Next = NULL;
		newn -> Prev = NULL;
		
		PNODE temp = Head;
		int i = 0;
			
		for(i=1 ; i<(iPos-1) ; i++)
		{
			temp = temp -> Next;
		}
		
		newn -> Next = temp -> Next;
		temp -> Next -> Prev = newn;
		
		temp -> Next = newn; 
		newn -> Prev = temp;
		
		CountNode++;
	}
}

void DoublyCLL::DeleteFirst()
{
	if(CountNode == 0)
	{
		return;
	}
	else if(CountNode == 1)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Head = Head->Next;
		delete Tail->Next;	   //delete Head->Prev;
	}
	
	Tail -> Next = Head;
	Head -> Prev = Tail;
	
	CountNode--;
}

void DoublyCLL::DeleteLast()
{
	if(CountNode == 0)
	{
		return;
	}
	else if(CountNode == 1)
	{
		delete Tail;
		Head = NULL;
		Tail = NULL;
	}
	else
	{
		Tail = Tail->Prev;
		delete Tail->Next;			//delete Head->Prev;
	}
	
	Tail -> Next = Head;
	Head -> Prev = Tail;
	
	CountNode--;
}

void DoublyCLL::DeleteAtPos(int iPos)
{
	if((iPos < 1) || (iPos > CountNode))
	{
		cout<<"Invalide position \n";
		return;
	}
	
	else if(iPos == 1 )
	{
		DeleteFirst();
	}
	
	else if(iPos == CountNode)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = Head;
		int i = 0;
		
		for(i=1 ; i<(iPos-1) ; i++)
		{
			temp = temp -> Next;
		}
		
		temp->Next = temp->Next->Next;
		delete temp -> Next -> Prev;
		
		temp->Next->Prev = temp;

		CountNode--;
	}
	
}

void DoublyCLL::Display()
{
	PNODE temp = Head;
	int i = 0;
	
	for(i=1 ; i<= CountNode ; i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp = temp -> Next;
	}
	cout<<"\n";
}

int DoublyCLL::Count()
{
    return CountNode;
}
