#include<iostream>
using namespace std;

class ArrayX
{
	private:
		int *Arr;
		int iSize;
		
	public:
		ArrayX(int iValue)
		{
			this->iSize = iValue;
			Arr = new int[iSize];
		}
		~ArrayX()
		{
			delete []Arr;
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"Enter number of elements\n";
			
			for(iCnt=0;iCnt<iSize;iCnt++)
				{
					cin>>Arr[iCnt];
				}
		}
		
		void Display()
		{
			int iCnt=0;	
			cout<< "elements of Array are : \n";
			
			for(iCnt=0;iCnt<iSize;iCnt++)
				{
					cout<<Arr[iCnt]<<endl;
				}
		}
		
		int Summation()
		{
			int iSum = 0 , iCnt = 0;
	
			for(iCnt=0 ; iCnt< iSize ; iCnt++)
				{
					iSum = iSum+Arr[iCnt];
				}		
			return iSum;
		}
};
int main()
{	
	int iRet=0;
	
	ArrayX obj1(5);
	
	obj1.Accept();
	obj1.Display();
	
	iRet = obj1.Summation();
	
	cout<<"Addition is :"<<iRet<<endl;
	
	return 0 ;
}