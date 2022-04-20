//WAP to find perimeter of a square ,rectangle and circle using function overloading.
#include<iostream>
using namespace std;

//function overloading
int peri(int);
int peri(int,int);
float peri(float);
int main()
{
	int side,length,breadth;
	float r;
	cout<<"Enter side of a Square: ";
	cin>>side;
	cout<<"Enter length and breadth of Rectangle: ";
	cin>>length>>breadth;
	cout<<"Enter the radius of circle: ";
	cin>>r;
	cout<<"Perimeter of Square: "<<peri(side)<<endl;
	cout<<"Perimeter of Rectangle: "<<peri(length,breadth)<<endl;
	cout<<"Perimeter of circle: "<<peri(r)<<endl;
}
int peri(int s)
{
	return(4*s);
}
int peri(int len,int brth)
{
	return(len*brth);
}
float peri(float r)
{
	return (2*3.14*r);
}
