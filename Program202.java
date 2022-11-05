//HexaDecimal to Binary conversion 

import java.lang.*;
import java.util.*;

// 0000 0000 0000 0000 0000 0000 0100 1000
//  0	  0	   0    0    0    0    4    8

class Bitwise
{
	public int ToggleBit(int iNo,int iPos)  
	{
		int iResult = 0;
		int iMask = 0X00000001;
		
		iMask = iMask <<(iPos-1);
		
		iResult = iNo ^ iMask;
	
		return iResult;
	}
}

class Program202
{
	public static void main(String arg[])
	{
		Scanner Sobj = new Scanner(System.in);
		
		System.out.println("Enter number");	
		int value = Sobj.nextInt();
		
		System.out.println("Enter Position");	
		int iPos = Sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int bret = bobj.ToggleBit(value,iPos);
		
		System.out.println("Updated number is :"+bret);
	}
}
