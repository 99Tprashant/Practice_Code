#include<stdio.h>
#include<stdbool.h>

int AdditionFactors(int iNo)
{
	int iSum =0;
     int iCnt = 0;
	 if(iNo<0)
	 {
		 iNo = -iNo;
	 }
 
	 for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	 {
		if((iNo%iCnt)==0)   
		{
			iSum =iSum+iCnt;
		}
	 }	
	 return iSum;
}
bool CheckPerfect(int iNo)
{
	
	int iAns =0;
	
	iAns = AdditionFactors(iNo);
	
		if(iAns == iNo)
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
	int iValue = 0;
	bool bRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	bRet = CheckPerfect(iValue);
	if(bRet==true)
	{
		printf("%d is perfect number",iValue);
	}
	else
	{
		printf("%d is not perfect number",iValue);
	}
	return 0;
}

