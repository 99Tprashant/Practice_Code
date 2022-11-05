//Accept n number

#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[],int size)
{
	int i= 0;
	for(i=0; i<size;i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Brr[]={10,20,30,40,50};
	Display(Brr,5);
	
	float crr[]={10.5,20.6,30.3,40.2,50.9};
	Display(crr,5);
	
	return 0;
}