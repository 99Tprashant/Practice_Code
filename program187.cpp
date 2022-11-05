// copy the string

#include<iostream>
using namespace std;

void strCpyX(char *src,char *dest)
{
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
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strCpyX(Arr,Brr);
	cout<<"String After copied : "<<Brr<<endl;
	
	return 0;
}