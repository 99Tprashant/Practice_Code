//number of ovels in string 
// Case sencitive

#include<iostream>
using namespace std;

int CountCaptial(char str[])
{
    int iCnt = 0;
	while(*str!='\0')
	{
		if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'i')||(*str == 'o')||(*str == 'u')||(*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
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
	cout<<"Number of ovens are : "<<iRet<<endl;
	
	return 0;
}