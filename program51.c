#include<stdio.h>

void DisplayEven(int iNo)
{
	int iDigit = 0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
    while(iNo > 0) 		
	{   iDigit = iNo % 10;

		iNo = iNo/10;
		if(iDigit % 2 ==0)
		{
			printf("even number is %d\n",iDigit);
		}	
		else
		{
			printf(" not even number is ");
		}
	}
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
       DisplayEven(iValue);
	
	//printf("Summation of digits are %d",iRet);
	return 0;
}