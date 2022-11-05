//Swaping of two numbers by genric method

#include<iostream>
using namespace std;

template<class T>
void SwapR(T *p,T *q)
{
	T temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int iNo1 = 11,iNo2 = 21;
	cout<<"Before swap data is :"<<iNo1<<"\t"<<iNo2<<endl;
	SwapR(&iNo1,&iNo2);
	cout<<"After swap data is :"<<iNo1<<"\t"<<iNo2<<endl;
	
	float fNo1 = 11.5,fNo2 = 21.7;
	cout<<"Before swap data is :"<<fNo1<<"\t"<<fNo2<<endl;
	SwapR(&fNo1,&fNo2);
	cout<<"After swap data is :"<<fNo1<<"\t"<<fNo2<<endl;
	
	char cNo1 = 'A',cNo2 = 'B';
	cout<<"Before swap data is :"<<cNo1<<"\t"<<cNo2<<endl;
	SwapR(&cNo1,&cNo2);
	cout<<"After swap data is :"<<cNo1<<"\t"<<cNo2<<endl;
	
	return 0;
}