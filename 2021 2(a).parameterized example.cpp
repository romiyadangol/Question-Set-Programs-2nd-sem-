//parameterized constructor example
//calculate area of a wall
#include<iostream>
using namespace std;
class Wall
{
	double length;
	double height;
	public:
		Wall(double len,double hgt)//parameterized constructor
		{
			length=len;
			height=hgt;	
		}
		double calculateArea()
		{
			return length * height;
		}
};
int main()
{
	Wall w1(15.5 , 5.5);
	Wall w2(10.0 , 5.5);
	cout<<"Area of Wall 1: "<<w1.calculateArea()<<endl;
	cout<<"Area of Wall 2: "<<w2.calculateArea();
	return 0;
}
