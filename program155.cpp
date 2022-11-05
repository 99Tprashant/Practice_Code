#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

class SinglyCLL
{
	private:
	PNODE Head;
	PNODE Tail;
	
	public:
	SinglyCLL();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int no,int ipos);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int Pos);
	void Display();
	int Count();
		
};

	SinglyCLL::SinglyCLL()
	{
		Head = NULL;
		Tail = NULL;
	}
	
	void SinglyCLL::InsertFirst(int no)
	{
		PNODE newn = NULL;
		
		newn = new NODE;
		
		newn->data = no;
		newn -> next =NULL;
		
		if((Head == NULL)&&(Tail == NULL))
		{
			Head = newn;
			Tail = newn;
		}
		else
		{
			newn->next = Head;
			Head = newn;			
		}
		Tail -> next = Head;
	}
	
	void SinglyCLL::InsertLast(int no)
	{
		PNODE newn = NULL;
		
		newn = new NODE;
		
		newn->data = no;
		newn -> next =NULL;
		
		if((Head == NULL)&&(Tail == NULL))
		{
			Head = newn;
			Tail = newn;
		}
		else
		{
			Tail->next = newn;
			Tail = newn;
		}
		Tail -> next = Head;
	}
	
	void SinglyCLL::InsertAtPos(int no,int ipos)
	{
		int iSize = Count();
		
		if((ipos < 1) ||(ipos > iSize+1))
		{
			cout<< "Invalide position\n";
			return;
		}
		if(ipos == 1)
		{
			InsertFirst(no);
		}
		else if(ipos == iSize +1)
		{
			InsertLast(no);
		}
		else
		{
			
			PNODE newn = NULL;
		
			newn = new NODE;
		
			newn->data = no;
			newn -> next =NULL;
			
			PNODE temp = Head;
			int iCnt = 0;
			
			for(iCnt = 1;iCnt < ipos-1; iCnt++)
			{
				temp = temp-> next;
			}
			
			newn->next = temp->next;
			temp->next = newn;
		}
	}
	
	void SinglyCLL::DeleteFirst()
	{
		if((Head == NULL)&&(Tail == NULL))
		{
			return;
		}
		else if(Head == Tail)
		{
			delete Tail;
			Head = NULL;
			Tail = NULL;
		}
		else
		{
			Head = Head->next;
			delete Tail->next;
			Tail->next = Head;
		}
	}
	
	void SinglyCLL::DeleteLast()
	{
		if((Head == NULL)&&(Tail == NULL))
		{
			return;
		}
		else if(Head == Tail)
		{
			delete Tail;
			Head = NULL;
			Tail = NULL;
		}
		else
		{
			PNODE Temp = Head;
			
			while(Temp->next!=Tail)
			{
				Temp = Temp->next;
			}
		
			delete Tail;
			Tail = Temp;
			
			Tail->next = Head;
		}
	}
	
	void SinglyCLL::DeleteAtPos(int ipos)
	{
		int iSize = Count();
		
		if((ipos < 1) ||(ipos > iSize))
		{
			cout<< "Invalide position\n";
			return;
		}
		if(ipos == 1)
		{
			DeleteFirst();
		}
		else if(ipos == iSize)
		{
			DeleteLast();
		}
		else
		{
			PNODE Temp1 = Head;
			int iCnt = 0;
			
			for(iCnt = 1;iCnt < ipos-1; iCnt++)
			{
				Temp1 =Temp1 -> next;
			}
			PNODE Temp2 = Temp1->next;
			Temp1->next = Temp2->next;
			delete Temp2;
		}
	}
	
	void SinglyCLL::Display()
	{
		PNODE temp = Head;
		
		if((Head == NULL)&&(Tail == NULL))
		{
			return;
		}
		
		do
		{
			cout<<"|"<<temp->data<<"|->";
			temp = temp ->next;
		}while(temp!=Tail->next);
		cout<<endl;
	}
	
	int SinglyCLL::Count()
	{
		int iCnt =0;
		PNODE temp = Head;
		
		if((Head == NULL)&&(Tail == NULL))
		{
			return 0;
		}
		
		do
		{
			iCnt++;
			temp = temp->next;
		}while(temp!=Head);
		
		return iCnt;
	}
	
int main()
{
	SinglyCLL obj;
	int iRet =0;
	
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertFirst(101);
	obj.InsertFirst(111);
	obj.InsertFirst(121);
	obj.InsertFirst(151);
	obj.InsertFirst(201);
	
	obj.Display();
	iRet = obj.Count();
	
	cout<<"Numberof nodes are :"<<iRet<<endl;
	
	obj.InsertAtPos(75,4);
	
	obj.Display();
	iRet = obj.Count();
	
	cout<<"Numberof nodes are :"<<iRet<<endl;
	
	obj.DeleteAtPos(4);
	
	obj.Display();
	iRet = obj.Count();
	
	cout<<"Numberof nodes are :"<<iRet<<endl;
	
	return 0;
}