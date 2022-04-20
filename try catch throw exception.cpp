#include<iostream>
using namespace std;


int main()
{
	int n,d,r;
	cout<<"Enter numerator and deniminator :";
	cin>>n>>d;
	try
	{
		if(d==0)
		{
			throw d;
		}
	r=n/d;
	}	
	catch(int z)
	{
		cout<<"Exception:Divided by zero";
	}
	cout<<"Divsion is :"<<r;
	return 0;
}
