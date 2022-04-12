//wap to convert distance into km ,m where user gives input in m.
#include<iostream>
using namespace std;
class Distance
{
	int km,m;
	public:
		Distance(int d)
		{
			km=d/1000;
			m=d%1000;
		}
		void display();
};
void Distance::display()
{
	cout<<km<<" kilometer "<<m<<" meter "<<endl;
}
int main()
{
	int result;
	cout<<"Enter the time duration in meter: "<<endl;
	cin>>result;
	Distance d1 = result;
	d1.display();
	return 0; 
}
