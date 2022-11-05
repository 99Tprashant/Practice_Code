//Maximum in number

#include<iostream>
using namespace std;

template<class T>
T Maximum(T Arr[],int size)
{
	T Max = Arr[0];
	int i= 0;
	for(i=0; i<size;i++)
	{
		if(Arr[i]>Max)
		{
			Max = Arr[i];
		}
	}
	return Max;
}

int main()
{
	int Brr[]={10,20,30,40,50};
	int iRet = 0;
	iRet = Maximum(Brr,5);
	cout<<"Maximum is : "<<iRet<<endl;
	
	float crr[]={10.8,20.9,30.5,40.5,50.1};
	float fRet = 0;
	fRet = Maximum(crr,5);
	cout<<"Maximum is : "<<fRet<<endl;
	
	return 0;
}