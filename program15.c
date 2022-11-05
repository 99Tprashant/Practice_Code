//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of ITERATION

void Display(int ino)
{
	int icnt=0;

	//	   1	  2 	   3	   	
for ( icnt=1;  icnt<=ino;  icnt++)		
	{
 	    printf("Hello\n");  //  4
	}
		
}

int main()
{
	int ivalue=0;
	printf("Enter the no\n");
	scanf("%d",&ivalue);
	Display(ivalue);     
	
	return 0;
}
