// input : hello
/*
output :
h
h  e
h  e  l
h  e  l  l
h  e  l  l  o
h  e  l  l
h  e  l
h  e
h
*/
import java.lang.*;
import java.util.*;

class Program341
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		int i =0;
		int j=0;
		for(i =0;i<Arr.length-1;i++)
		{
			for(j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+"  ");
			}
			 System.out.println();
		}
		for(i =Arr.length-1;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+"  ");
			}
			 System.out.println();
		}
		
		
    }
}