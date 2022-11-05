//HexaDecimal to Binary conversion

import java.lang.*;
import java.util.*;

// 0000 0000 0000 0000 0010 0000 0000 0000
//  0	  0	   0    0    2   0    0     0

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 0X00002000;  // Decimal 1048576
		int iResult = 0;
		
		iResult = iNo & iMask;
		
		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
			
	}
}

class Program197
{
	public static void main(String arg[])
	{
		Scanner Sobj = new Scanner(System.in);
		
		System.out.println("Enter number");	
		int value = Sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		boolean bret = bobj.CheckBit(value);
		
		if(bret == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
		
	}
}
