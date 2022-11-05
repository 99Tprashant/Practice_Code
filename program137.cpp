#include<iostream>
using namespace std;
	
class Number
{
	public:
	
	int Fact(int iNo)
	{
		int iFact = 1;
		int iCnt = 0;
	
		for(iCnt=1;iCnt<=iNo;iCnt++)
		{
			iFact = iFact*iCnt;
		}
		return iFact;A
	}
};

int main()
{
	Number nobj;
	
	int iValue = 0;
	int iRet = 0;
	
	cout<<"ENTER A NUMBER:\n";
	cin>>iValue;

    iRet = nobj.Fact(iValue);
    cout<<"Factorial is : "<<iRet<<endl;	
	
	return 0;
}
