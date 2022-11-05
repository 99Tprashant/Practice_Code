// input : hello
/*
output :
h
h e
h e l
h e l l
h e l l o
*/
import java.lang.*;
import java.util.*;

class Program339
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the String");
		String str = sobj.nextLine();
		
		char Arr[] = str.toCharArray();
		for(int i =0;i<Arr.length;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print(Arr[j]+"  ");
			}
			 System.out.println();
		}
		
    }
}