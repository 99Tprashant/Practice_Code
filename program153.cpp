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
	{}
	
	void SinglyCLL::InsertLast(int no)
	{}
	
	void SinglyCLL::InsertAtPos(int no,int ipos)
	{}
	
	void SinglyCLL::DeleteFirst()
	{}
	
	void SinglyCLL::DeleteLast()
	{}
	
	void SinglyCLL::DeleteAtPos(int Pos)
	{}
	
	void SinglyCLL::Display()
	{}
	
	int SinglyCLL::Count()
	{
		return 0;
	}
	
int main()
{
	SinglyCLL obj;
	
	return 0;
}