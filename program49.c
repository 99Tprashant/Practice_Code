#include<stdio.h>

int CountDigits(int iNo)
{
	int iCnt = 0;
	int iDigit = 0 ;
	if(iNo<0)
	{
		iNo = -iNo;
	}
    while(iNo > 0) 		
	{
		iCnt++;
		iNo = iNo/10;
        iDigit= iDigit+iCnt;		
	}
	return iDigit;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	
	printf("Number of digits are %d",iRet);
	return 0;
}