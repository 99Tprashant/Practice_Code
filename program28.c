//1)A ccept number from user and print its factors.
// input : 10
// output: 1 2 5

// input : -20
// output: 1 2 4 5 10

#include<stdio.h>


void DisplayFactors(int iNo)
{
     int iCnt = 0;
	 for(iCnt=1;iCnt<=iNo;iCnt++)
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
