//WAP to add 2 complex numbers of 2 different classes.
#include<iostream>
using namespace std;
class complex
{
	public:
		int real;
		int imag;
};
class complex1
{
	public:
		int real1;
		int imag1;
};
int main()
{
	complex obj;
	complex1 obj1;
	int a,b,c,d;
	cout<<"Enter the real and imaginary numbers for first class: ";
	cin>>a>>b;
	cout<<endl;
	obj.real=a;
	obj.imag=b;
	cout<<"Enter the real and imaginary numbers for second class: ";
	cin>>c>>d;
	cout<<endl;
	obj1.real1=c;
	obj1.imag1=d;
	cout<<"The sum of 2 complex numbers entered is "<<obj.real+obj1.real1<<" + "<<obj.imag+obj1.imag1<<"i";
	return 0;
}
