#include<stdio.h>

void Display(int *iptr)
{
	register int iCnt=0;
	printf("Elements of array are:\n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	  printf("%d\n",*(iptr+iCnt));
	}
}

int main()
{
	auto int Arr[5];
	register int iCnt=0;

	printf("Enter the elements of array: \n");
	for(iCnt=0;iCnt<5;iCnt++)
	{
	  scanf("%d",&Arr[iCnt]);
	}
  
	Display(Arr);
  
  return 0;
}