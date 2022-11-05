#include"Header59.h"

int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto ULONG lRet = 0;
	printf("Enter Base \n");
	scanf("%d",&iValue1);
	
	printf("Enter rest \n");
	scanf("%d",&iValue2);
	
	lRet =Power(iValue1,iValue2);
	printf("result is : %ld",lRet);
	
	return 0;
}