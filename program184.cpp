// lower case to upper case

#include<iostream>
using namespace std;

void strUprX(char str[])
{
  
	while(*str!='\0')
	{
		if((*str >= 'a')||(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strUprX(Arr);
	cout<<"String in Upper case : "<<Arr<<endl;
	
	return 0;
}