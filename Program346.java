// input : 78956
/*
output :
7+9+9+5+9   39
3+9			12
1+2			3
*/

import java.lang.*;
import java.util.*;

class Program346
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
		
        System.out.println("Enter the number");
		int no = sobj.nextInt();
		int iSum = 0;
		while(true)
		{
			while(no != 0)
			{	
				iSum = iSum+(no%10);
				no = no/10;	
			}
			no = iSum;
			iSum = 0;
			if(no < 10)
			{
				break;
			}	
		}
		System.out.println(no);
		
		
    }
}