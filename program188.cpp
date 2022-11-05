// string concatination 2&1

#include<iostream>
using namespace std;

void strCatX(char *src,char *dest)
{
	while(*dest != '\0')
	{
		dest++;
	}
	while(*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	} 
	*dest = '\0';
 
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
	cout<<"String After concatination : "<<Brr<<endl;
	
	return 0;
}