#include<iostream>
using namespace std;

template<typename S>
void swapp (S a,S b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
 	cout << "a = " << a << ", b = " << b << endl;
	
	 
}
int main()
{
	int n1,n2;
	cout<<"Enter the first number:";
	cin>>n1;
	cout<<"Enter the second number:";
	cin>>n2;
	swapp<int>(n1,n2);
	
	return 0; 
}
