// Program to display numbers on screen


#include<stdio.h>
void Display(int iNo)
{
	int iCant = 0;

	for(iCant=1; iCant<= iNo; iCant++)
	{
		printf("%d\n",iCant);
	}
}
int main()
{
	int iValue = 0;
	printf("Enter the no.\n");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
