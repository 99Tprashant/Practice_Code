#include<stdio.h>

void JwelersPortal(int iGrams)
{
	switch(iGrams)
	{
		case 1:
		
			printf("your bill amount is 4000 rs\n");
			break;
		
		case 2:
		
			printf("your bill amount is 8000 rs\n");
			break;
		
		case 5:
		
			printf("your bill amount is 20000 rs\n");
			break;
		
		case 10:
		
			printf("your bill amount is 40000 rs\n");
			break;
		
		default:
		
			printf("Invalide weight\n");
			break;
	}
}

int main()
{
	int iValue =0.0;
	
	printf("Enter how many gram want to have\n");
	scanf("%d",&iValue);
	
	JwelersPortal(iValue);
	return 0;
}