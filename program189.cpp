// string concatination 1&2

#include<iostream>
using namespace std;

void strCatX(char *src,char *dest)
{
	while(*src != '\0')
	{
		src++;
	}
	while(*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	} 
	*src = '\0';
 
}

int main()
{
	char Arr[20];		//bharleli vahi
	char Brr[20];		//kori vahi
	
	cout<<"Enter first string"<<endl;
	cin.getline(Arr,20);
	
	cout<<"Enter Second string"<<endl;
	cin.getline(Brr,20);
	
	strCatX(Arr,Brr);
	cout<<"String After concatination : "<<Arr<<endl;
	
	return 0;
}