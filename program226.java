// Singly Linear linkedlist 

import java.lang.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;


class node<T>
{
	public T data;
	public node next;	
}

class SinglyLL<T>
{
	public node Head;
	public int Count;
	
	public SinglyLL()
	{
		Head = null;
		Count = 0;
	}
	
	public void InsertFirst(T no)
	{
		node newn = new node();
		newn.data = no;
		newn.next = null;
		
		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			newn.next = Head;
			Head = newn;
		}
		Count++;
	}
	
	public void InsertLast(T no)
	{
		node newn = new node();
		newn.data = no;
		newn.next = null;
		
		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			node  temp = Head;
			while(temp.next!=null)
			{
				temp=temp.next;
			}
			temp.next = newn;
		}
		Count++;
	}
	
	public void Display()
	{
		node temp = Head;
		
		System.out.println("Element of linked list are:");
		while(temp!=null)
		{
			System.out.print("|"+temp.data+"|->");
			temp=temp.next;
		}
		System.out.println("NULL");
	}
	
	public int CountNode()
	{
		return Count;
	}

	public void DeleteFirst()
	{
		if(head == null)
		{
			delete head;
		}
		else if(head.next==NULL)
		{
			node temp = new node;
			temp = head;
			head = head.next;
			delete temp;
		}
		else
		{
			node temp = new node;
			temp = head;
			head = head.next;
			delete temp;
		}
		Count--;
	}

	public void DeleteLast()
	{
		if(head == NULL)
		{
			delete head;
		}
		else if(head.next==NULL)
		{
			delete head;
			head = null;
		}
		else
		{
			node temp = new node;
			temp = head;
			while(temp.next.next!=NULL)
			{
				temp = temp.next;
			}
			delete (temp.next);
			temp.next = null;
		}
			Count--;
	}


	public void InsertAtPos(T no,int pos)
	{
		int Size = CountNode();

		if(pos < 1 || pos >(Size+1))
		{
			System.out.println("your entered position is invalide");
		}
		else if(pos == 1)
		{
			InsertFirst( no);
		}
		else if(pos == (Size+1))
		{
			InsertLast( no);
		}
		else 
		{
			node newn = new node();
			newn.data = no;
			newn.next = null;

			node temp = new node;
			temp = head;

			for(int iCnt = 1; iCnt < pos-1;iCnt++)
			{
				temp = temp.next; 
			}
			
			newn.next = temp.next;
			temp.next = newn;	

		}
		Count++;
	}

	public void DeleteAtPos(int pos)
	{
		int Size = CountNode();
		if(pos < 1 || pos >(Size+1))
		{
			System.out.println("your entered position is invalide");
		}
		else if(pos == 1)
		{
			DeleteFirst();
		}
		else if(pos == (Size))
		{
			DeleteLast();
		}
		else 
		{
			node temp = new node;
			temp = head;
			node Deltemp = new node;
			Deltemp = head;

			for(int iCnt = 1; iCnt < pos-1;iCnt++)
			{
				temp = temp.next; 
			}
			Deltemp = temp .next;
			temp.next =  temp.next.next;
			delete Deltemp;
			
		}
		Count--;
	}

}

 
class Program226
{
	public static void main(String Arr[])
	{
		SinglyLL obj = new SinglyLL();
		
		obj.InsertFirst(51);
		obj.InsertFirst(21);
		obj.InsertFirst(11);
		
		obj.InsertLast(101);
		obj.InsertLast(111);
		
		obj.Display();
		
		System.out.println("Number of elements are:"+obj.CountNode());
		
	}
}

