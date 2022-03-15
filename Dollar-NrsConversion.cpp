#include<iostream>
using namespace std;
class currconversion{
	int dollar;
	static int rate;
	public:
		void setvalue(int x)
		{
			dollar=x;
		}
	friend int conversion(currconversion);
};
int currconversion :: rate = 119;
int conversion(currconversion x)
{
	int z=0;
	z = x.dollar * x.rate;
	return z;
}
int main()
{
	currconversion obj1,obj2;
	int value=0,t=0;
	cout<<"Enter the value in dollar to convert to Nrs: ";
	cin>>value;
	obj1.setvalue(value);
	t=conversion(obj1);
	cout<<"The converted value from dollar to Nrs is "<<t;
	return 0;	
}
