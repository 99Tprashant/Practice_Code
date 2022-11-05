//HexaDecimal to Binary conversion on 4th bit

import java.lang.*;
import java.util.*;

// 0000 0000 0000 0000 0000 0000 0000 1000
//  0	  0	   0    0    0   0    0     8

class Bitwise
{
	public int OnBit(int iNo)  //4
	{
		int iMask = 0X00000008;
		int iResult = 0;
		
		iResult = iNo | iMask;
	
			return iResult;
	}
}

class Program198
{
	public static void main(String arg[])
	{
		Scanner Sobj = new Scanner(System.in);
		
		System.out.println("Enter number");	
		int value = Sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		int bret = bobj.OnBit(value);
		System.out.println("Updated nymber is :"+bret);
	}
}
