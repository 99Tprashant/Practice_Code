//find amstrong number

#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
	auto int iDigCnt = 0;
	auto int iTemp = 0, iDigit = 0, iSum= 0;
	register int iCnt = 0;
	auto int iMult = 1;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iTemp=iNo;
	while(iNo!=0)
	{
		iDigCnt++;
		iNo=iNo/10;
	}
	iNo = iTemp;
	
	while(iNo !=0)
	{
		iMult = 1;
		iDigit = iNo%10;
		
		for(iCnt=1;iCnt<=iDigCnt;iCnt++)
		{
			iMult = iMult*iDigit;
		}
	
		iSum = iSum + iMult;
		iNo=iNo/10;
	}

	if(iSum == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
} 

int main()
{
	auto int iValue=0;
	bool bRet = 0;
	printf("Enter a number\n");
	scanf("%d",&iValue);
	
	bRet=CheckArmstrong(iValue);
	
	if(bRet==true)
	{
		printf("%d is a armstrong number\n",iValue);
	}
	else
	{
		printf("%d is not a armstrong number\n",iValue);
	}
	return 0;
}