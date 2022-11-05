//Swaping of two numbers by genric method

#include<iostream>
using namespace std;

template<class T>
T Addition(T A,T B)
{
	T Ans;
	Ans = A + B;
	return Ans;
}

int main()
{
	int iNo1 = 11,iNo2 = 21;
	int ret = 0;
	
	ret = Addition(iNo1,iNo2);
	cout<<"Addition is:"<<ret<<endl;
	
	float fNo1 = 11.89,fNo2 = 21.90;
	float fret = 0.0;
	
	fret = Addition(fNo1,fNo2);
	cout<<"Addition is:"<<fret<<endl;
	
	return 0;
}