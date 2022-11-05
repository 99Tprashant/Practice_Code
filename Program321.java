//anagram string with filter
import java.lang.*;
import java.io.*;
import java.util.*;

class Program321
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
	
		System.out.println("Enter the First string: ");
		String str1 = sobj.nextLine();
		
		System.out.println("Enter Second string: ");
		String str2 = sobj.nextLine();
		
		char arr[] = (str1.toLowerCase()).toCharArray();
		char brr[] = (str2.toLowerCase()).toCharArray();
		
		Arrays.sort(arr);
		Arrays.sort(brr);
		
		if(Arrays.equals(arr,brr))
		{
			System.out.println("Strings are anagram");
		}
		else
		{
			System.out.println("Strings are not anagram");
		}
	}
}