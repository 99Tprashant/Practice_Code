// toggle the string

#include<iostream>
using namespace std;

void strToggleX(char str[])
{
  
	while(*str!='\0')
	{
		if((*str >= 'a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		else if((*str >= 'A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strToggleX(Arr);
	cout<<"String After toggled : "<<Arr<<endl;
	
	return 0;
}