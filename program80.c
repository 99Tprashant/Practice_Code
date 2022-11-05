
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int LastOccurence(int arr[],int iLength,int iNo)				//21 51 11 13 11 101 121
{																// 11 21 51 101 111
	register int iCnt=0;
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(arr[iCnt]==iNo)
		{ 
			break;
		}
	}
		return iCnt;
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