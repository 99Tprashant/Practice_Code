#include<stdio.h>


void DisplayFactors(int iNo)
{
     int iCnt = 0;
	 if(iNo<0)
	 {
		 iNo = -iNo;
	 }
 
	 for(iCnt=1;iCnt<=(iNo/2);iCnt++)
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

//
// Time complexity : o(N/2)