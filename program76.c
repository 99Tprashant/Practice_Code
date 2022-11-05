//

#include<stdio.h>
#include<stdlib.h>

int ChkOccurance(int arr[],int iLength,int iNo)
{
	auto int iFrequency =0;
	register int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(arr[iCnt]==iNo)
		{ 
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	auto int iSize = 0,iRet=0,iValue = 0;
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
	
	printf("Enter number \n");
	scanf("%d",&iSize);
	
	iRet = ChkOccurance(iptr,iSize,iValue);
	
	printf("number count is :%d\n",iRet);
	free(iptr);
	
	return 0;
}