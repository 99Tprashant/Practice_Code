//addition of n numbers
#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int arr[],int iLength)
{
	int iSum=0,iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+arr[iCnt];
	}
	return iSum;
}

int main()
{
	int iSize = 0,iRet=0;
	int *iptr = NULL;
	register int iCnt=0;
	
	printf("Enter length of array \n");
	scanf("%d",&iSize);
	
	iptr = (int*)malloc(iSize*sizeof(int));
	
	printf("enter elements of array");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	iRet = SummationNumber(iptr,iSize);
	
	printf("Summation is :%d\n",iRet);
	free(iptr);
	
	return 0;
}