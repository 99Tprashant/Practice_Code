#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int arr[],int iLength)
{
	auto int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((arr[iCnt]%2)==0)
		{
			printf(" Even elements are : %d ",arr[iCnt]);
		}
	}			
}
int main()
{
	auto int iSize=0;
	auto int *iptr=NULL;
	auto int iCnt = 0;
	printf("Enter no of elements\n");
	scanf("%d",&iSize);
	
	iptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter values of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&iptr[iCnt]);
	}
	DisplayEven(iptr,iSize);
	
	free(iptr);
	return 0;
}