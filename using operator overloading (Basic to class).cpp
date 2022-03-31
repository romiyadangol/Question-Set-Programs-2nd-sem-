//wap basic to class type using opertor overloading
#include<iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
		void display();
		void operator=(int);
};
void Time::display()
{
	cout<< hr <<"hours"<< min <<"minutes"<<endl;
}
void Time::operator=(int t)
{
	cout<<"Basic type==> Class type"<<endl;
	hr=t/60;
	min=t%60;
}
int main()
{
	Time obj;
	int duration;
	cout<<"Enter the time duration in minutes: ";
	cin>>duration;
	obj = duration;
	obj.display();
	return 0;
}
