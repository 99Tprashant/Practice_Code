#include<stdio.h>


void DisplayFactors(int iNo)
{
     int iCnt = 0;
	 if(iNo<0)
	 {
		 iNo = -iNo;
	 }
 
	 for(iCnt=1;iCnt<=iNoiCnt++)
	 {
		if((iNo%iCnt)==0) 
		printf("%d\t",iCnt);   
	 }	
}
int main()
{
	int iValue = 0;
	
	printf("Enter a number:\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	return 0;
}