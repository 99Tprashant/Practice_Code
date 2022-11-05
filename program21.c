// Program to display 1 to 5 on screen
//Output 1 2 3 4 5

#include<stdio.h>
void Display(int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	iCnt = 1;
	
	while(iCnt <= iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}
int main()
{
	int iValue= 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
