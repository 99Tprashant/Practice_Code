//element is there is or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int arr[],int iLength,int iNo)
{
	register int iCnt=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==iNo)
		{ 
			break;
		}
	}
	if(iCnt==iLength)
	{
		return false;
	}
	else 
	{
		return true;
	}
}

int main()
{
	auto int iSize = 0,iValue = 0;
	auto int *iptr = NULL;
	register int iCnt=0;
	bool bRet=0;
	printf("Enter length of array \n");
	scanf("%d",&iSize);
	
	iptr = (int*)malloc(iSize*sizeof(int));
	
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	printf("Enter element to search \n");
	scanf("%d",&iValue);
	
	bRet =Search(iptr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("%d element is in array\n ",iValue);
	}
	else
	{
		printf("%d element is not in array\n ",iValue);
	}
	
	free(iptr);
	
	return 0;
}