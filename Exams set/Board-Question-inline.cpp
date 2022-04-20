//Using inline function,WAP to add 2 numbers and return sum.
#include<iostream>
using namespace std;
inline void add(int d)
{
	cout<<"\nThe added number is :"<<d<<endl;
}
int main()
{
	int a,b,c;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"\nEnter the second number:";
	cin>>b;
	c=a+b;
	add(c);
	return 0;
}
