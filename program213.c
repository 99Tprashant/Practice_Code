//Accept n number

#include<iostream>
using namespace std;

template<class t>
void Display(T Arr[],T size)
{
	T i= 0;
	for(i=0; i<size;i++)
	{
		cout<<Arr[i]<<endl;
	}
}

int main()
{
	int Brr[]={10,20,30,40,50};
	
	Display(Brr,5);
	
	return 0;
}