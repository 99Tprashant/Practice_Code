// Program to display 1 to 5 on screen
//Output 1 2 3 4 5

#include<stdio.h>
void Display()
{
	int iCant = 0;
		
	for(iCant=1; iCant<= 5; iCant++)
	{
		printf("%d\n",iCant);
	}
}
int main()
{
	Display();
	return 0;
}
