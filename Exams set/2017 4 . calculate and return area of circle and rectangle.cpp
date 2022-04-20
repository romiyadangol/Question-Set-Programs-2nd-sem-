//calculate and return area of circle and rectangle using function overloading.
#include<iostream>
using namespace std;


int calc_area(int,int);
float calc_area(float);


int main()
{
	int len,brth;
	float r;
	cout<<"Enter length and breadth of rectangle:";
	cin>>len>>brth;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"\nArea of rectangle is "<<calc_area(len,brth);
	cout<<"\nArea of circle is "<<calc_area(r);
}

int calc_area(int len,int brth)
{
return(len*brth);
}
float calc_area(float r)
{
return(3.14*r*r);
}
