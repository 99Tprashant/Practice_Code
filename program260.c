#include<stdio.h>

int Sum(int *Arr, int iNo)
{
	static int i = 0;
	static int iSum = 0;
	
	if(i < iNo)
	{
		iSum = iSum + Arr[i];
		i++;
		Sum(Arr,iNo);
	}
	
	return iSum;
}

int main()
{
	int Brr[]={10,20,30,40};
	int iRet = 0;

	iRet = Sum(Brr,4);
	printf("Summation is : %d\n",iRet);
	
	return 0;
	
}