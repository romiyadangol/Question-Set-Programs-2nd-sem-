/*WAP to overload a function named power which calculates a^b or (a+b)^c if two or 
three arguments are passed respectively.*/
#include<iostream>
#include<math.h>
using namespace std;
int cal(int x,int y)
{
	int result;
	result=pow(x,y);
	return result;
}
int cal(int x,int y,int z)
{
	int i,j;
	i=x+y;
	j=pow(i,z);
	return j;
}
int main()
{
	int a,b,c;
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"\nEnter the value of b :";
	cin>>b;
	cout<<"\nEnter the value of c :";
	cin>>c;
	cout<<"\nThe calculation of a^b is "<<cal(a,b)<<endl;
	cout<<"\nThe calculation of (a+b)^c is "<<cal(a,b,c)<<endl;
}
