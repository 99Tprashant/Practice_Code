//anagram string
import java.lang.*;
import java.io.*;
import java.util.*;

class Program316
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
	
		System.out.println("Enter the First string: ");
		String str1 = sobj.nextLine();
		str1 = str1.toLowerCase();
		
		char arr[] = str1.toCharArray();
		int Frequency1[] = new int[26];
		
		System.out.println("Enter Second string: ");
		String str2 = sobj.nextLine();
		str2 = str2.toLowerCase();
		
		char brr[] = str2.toCharArray();
		int Frequency2[] = new int[26];
		
		int i = 0;
		for(i =0; i <arr.length;i++)
		{
			Frequency1[arr[i] - 'a']++;
		}
		for(i =0; i <brr.length;i++)
		{
			Frequency2[brr[i] - 'a']++;
		}
		
		for(i = 0; i<Frequency1.length;i++)
		{
			if(Frequency1[i] != Frequency2[i])
			{
				break;
			}
		}
		
		if(i == 26)
		{
			System.out.println("string is anagram");
		}
		else
		{
			System.out.println("string is not anagram");
		}
	}
}