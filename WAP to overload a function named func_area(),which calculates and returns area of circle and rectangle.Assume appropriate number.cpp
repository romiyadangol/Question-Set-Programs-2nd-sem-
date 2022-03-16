//WAP to overload a function named func_area(),which calculates and returns area of circle and rectangle.Assume appropriate number 
//and type of arguments and return type.

#include<iostream>
using namespace std;


int func_area(int,int);
float func_area(float);


int main()
{
	int len,brth;
	float r;
	cout<<"Enter length and breadth of rectangle:";
	cin>>len>>brth;
	cout<<"Enter radius of circle:";
	cin>>r;
	cout<<"\nArea of rectangle is "<<func_area(len,brth);
	cout<<"\nArea of circle is "<<func_area(r);
}

int func_area(int len,int brth)
{
return(len*brth);
}
float func_area(float r)
{
return(3.14*r*r);
}
