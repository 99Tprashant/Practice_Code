//Program to display 5 times Hello on screen

#include<stdio.h>

//Demonstration of ITERATION

void Display(int ino)    //Updater
{
	int icnt=0;
	
	if (ino < 0)
	{
		ino=-ino;
	}
	
for ( icnt=0;  icnt<=ino;  icnt++)		
	{
 	    printf("Hello\n");  
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
