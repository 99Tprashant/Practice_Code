// string comparision

#include<iostream>
using namespace std;

bool strCmpX(char *src,char *dest)
{
	
	while((*src != '\0')&&(*dest !='\0'))
	{
		if(*src != *dest)
		{
			break;
		}
		src++;
		dest++;
	}
	
	if(*src == '\0' && *dest == '\0')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char Arr[20];		//bharleli vahi
	char Brr[20];		//kori vahi
	bool bRet;
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter Second string"<<endl;
	cin.getline(Brr,20);
	
	bRet = strCmpX(Arr,Brr);
	if(bRet == true)
	{
		cout<<"Strings are equal"<<endl;
	}
	else
	{
		cout<<"Strings are not equal"<<endl;
	}
	return 0;
}