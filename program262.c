#include<stdio.h>

int CountSmall(char *Arr)
{
	 int iCnt = 0;
	
	while(*Arr != '\0')
	{
		if((*Arr >= 'a') && (*Arr <='z'))
		{
			iCnt++;
		}
	
		Arr++;
		CountSmall(Arr);
	}
	
	return iCnt;
}

int main()
{
	char Brr[20];
	int iRet = 0;

	printf("Enter the String\n");
	scanf("%[^'\n']s",Brr);

	iRet = CountSmall(Brr);
	printf("Small chracter is : %d\n",iRet);
	
	return 0;
	
}