#include<iostream>
using namespace std;

int CountCaptial(char str[])
{
    int iCnt = 0;
	while(*str!='\0')
	{
		if((*str >= 'A') &&(*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	iRet = CountCaptial(Arr);
	cout<<"Number of captials are : "<<iRet<<"times."<<endl;
	
	return 0;
}