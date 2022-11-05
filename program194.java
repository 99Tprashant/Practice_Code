//Decimal to Binary conversion

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 64;
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

class Program194
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
