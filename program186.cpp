// reverce the string

#include<iostream>
using namespace std;

void strRevX(char *str)
{
  char *start = str;
  char *end = str;
  char temp = '\0';
  
  while(*end != '\0')
  {
	  end++;
  }
  end--;
  
  while(start < end)
  {
	  temp = *start;
	  *start = *end;
	  *end = temp;
	  
	  start++;
	  end--;
  }
  
}

int main()
{
	char Arr[20];
	
	cout<<"Enter string"<<endl;
	cin.getline(Arr,20);
	
	strRevX(Arr);
	cout<<"String After reverce : "<<Arr<<endl;
	
	return 0;
}