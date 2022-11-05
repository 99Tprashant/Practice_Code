//Minimum positive & negetive number in array 

#include<stdio.h>
#include<stdlib.h>

int Minimum(int arr[],int iLength)
{
	auto int iMin=arr[0];
	register int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(iMin > arr[iCnt])
		{ 
			iMin=arr[iCnt];
		}
	}
	return iMin;
}

int main()
{
	auto int iSize = 0,iRet=0;
	auto int *iptr = NULL;
	register int iCnt=0;
	
	printf("Enter length of array \n");
	scanf("%d",&iSize);
	
	iptr = (int*)malloc(iSize*sizeof(int));
	
	printf("enter elements of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	
	iRet = Minimum(iptr,iSize);
	
	printf("minimum no is :%d\n",iRet);
	free(iptr);
	
	return 0;
}