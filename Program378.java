import java.lang.*;
import java.util.*;

interface MarvellousSort
{
    public void Accept();
    public void Display();
    public void BubbleSort();
    public void InsertionSort();
    public void SelectionSort();
}

class Array implements MarvellousSort
{
    public int Arr[];

    public Array(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements");
        for(int i= 0;i <Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
   {
        System.out.println("Elements of the array are");
        for(int i= 0;i <Arr.length; i++)
        {
           System.out.print(Arr[i]+" ");
        }
		 System.out.println();
   }

   public void BubbleSort()
   {
	   int i = 0 , j = 0,temp = 0;
	   boolean Swap = false;
	   
	   for(i = 0; i< Arr.length; i++)
	   {
		   Swap = false;
		   for(j = 0; j< Arr.length-i-1; j++)
		   {
			   if(Arr[j] > Arr[j+1])
			   {
				   temp = Arr[j];
				   Arr[j]= Arr[j+1];
				   Arr[j+1] = temp;
				   Swap = true;
			   }
		   }
		    System.out.println("Pass : "+(i+1));
		    Display();
			if(Swap == false)
			{
				break;
			}
	   }
	   
   }

   public void InsertionSort()
   {
	   int i = 0,key = 0,j = 0;
	   
	   for(i = 1; i < Arr.length; i++)
	   {
		   key = Arr[i];
		   j = i-1;
		   
		   while(j >= 0 && Arr[j] > key)
		   {
			   Arr[j+1] = Arr[j];
			   j = j-1;
		   }
		   Arr[j+1] = key;
	   }
	   
   }

   public void SelectionSort()
   {
	   int min_index =0,i=0,j=0,temp=0;
	   
	   for(i = 0; i < Arr.length; i++)
	   {
		   min_index = i;
		   for(j=i; j < Arr.length; j++)
		   {
				if(Arr[min_index] > Arr[j])
				{
					min_index = j;
				}
		   }
	   }
	   temp = Arr[i];
	   Arr[i] = Arr[min_index];
	   Arr[min_index] = temp;
   }
}

class Program378
{
    public static void main(String arr[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter the size of array : ");
            int size = sobj.nextInt();

            Array aobj = new Array(size);
            aobj.Accept();
            aobj.Display();

			//aobj.BubbleSort();
			//aobj.InsertionSort();
			aobj.SelectionSort();
			System.out.println("Data after sorting");
			aobj.Display();
    }
}