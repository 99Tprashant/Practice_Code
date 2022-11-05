//HexaDecimal to Binary conversion on 27th bit

import java.lang.*;
import java.util.*;

// 0000 0100 0000 0000 0000 0000 0000 0000
//  0	  4	   0    0    0   0    0     0

class Bitwise
{
	public int OnBit(int iNo)  //27
	{
		int iMask = 0X04000000;
		int iResult = 0;
		
		iResult = iNo | iMask;
	
			return iResult;
	}
}

class Program199
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
