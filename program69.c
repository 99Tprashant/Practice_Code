#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iLength)
{
	register int iCnt=0;
	printf("Elements of array are:\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
	  printf("%d\n",Arr[iCnt]);
	}
}
int main()
{
	auto int *iptr = NULL;
	register int iCnt=0;
	auto int iSize=0;
	
	printf("Enter number of elements: \n");
	scanf("%d",&iSize);
	
	iptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the elements of array: \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	  scanf("%d",&iptr[iCnt]);
	}
  
	Display(iptr,iSize);
	free(iptr);
  return 0;
}