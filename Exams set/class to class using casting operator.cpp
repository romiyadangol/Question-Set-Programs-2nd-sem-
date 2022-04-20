//class to class using casting operator
#include<iostream>
using namespace std;
class Rectangle
{
	int width,length,area;
	public:
		Rectangle(int w,int l)
		{
			width=w;
			length=l;
			area=width*length;
		}
		void display()
		{
			cout<<"\nWidth: "<<width;
			cout<<"\nLength: "<<length;
			cout<<"\nArea of Rectangle: "<<area;
		}
};
class Triangle
{
	int base,height;
	float area;
	public:
		Triangle(int b,int h)
		{
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void print()
		{
			cout<<"\nBase: "<<base;
			cout<<"\nHeight: "<<height;
			cout<<"\nArea of Triangle: "<<area;
		}
		operator Rectangle()
		{
			Rectangle r1(base,height);
			return r1;
		}
};
int main()
{
	Triangle t(3,5);
	Rectangle r=t;
	t.print();
	r.display();
	return 0;
}
