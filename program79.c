
//element is there is or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOccurence(int arr[],int iLength,int iNo)							//21  51  11 13 11
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
		return -1;
	}
	else 
	{
		return iCnt;
	}
}
int LastOccurence(int arr[],int iLength,int iNo)
{
	register int iCnt=0;
	
	for(iCnt=iLength;iCnt>=0;iCnt--)
	{
		if(arr[iCnt]==iNo)
		{ 
			break;
		}
	}
	if(iCnt==0)
	{
		return -1;
	}
	else 
	{
		return iCnt;
	}
}

int main()
{
	auto int iSize = 0,iValue = 0;
	auto int *iptr = NULL;
	register int iCnt=0;
	int iRet=0;
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
	
	iRet =FirstOccurence(iptr,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("%d element is not in array\n ",iValue);
	}
	else
	{
		printf("%d element First occured at %d\n ",iValue,iRet);
	}
	
	iRet =LastOccurence(iptr,iSize,iValue);
	
	if(iRet==-1)
	{
		printf("%d element is not in array\n ",iValue);
	}
	else
	{
		printf("%d element last occured at %d\n ",iValue,iRet);
	}
	
	free(iptr);
	
	return 0;
}