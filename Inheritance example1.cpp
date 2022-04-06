#include<iostream>
using namespace std;
class Sample
{
	protected:
		int width;
		int height;
	public:
		void setWidth(int w)
		{
			width=w;
		}
		void setHeight(int h)
		{
			height=h;
		}		
};
class Rectangle:public Sample
{
	public:
		int Area()
	 	{
	 		return(width*height);
		}
};
int main()
{
	Rectangle r;
	r.setWidth(3);
	r.setHeight(5);
	cout<<"Total area is : "<<r.Area()<<endl;
	return 0;
}
