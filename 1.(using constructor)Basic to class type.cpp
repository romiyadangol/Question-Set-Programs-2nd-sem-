//wap basic to class type using constructor
#include<iostream>
using namespace std;
class Time
{
	int hr,min;
	public:
		Time(int);
		void display();
};
Time::Time(int t)
{
	 cout<<"Basic type==>Class type"<<endl;
	hr=t/60;
	min=t%60;
}
void Time::display()
{
	cout<< hr <<"hours"<< min <<"minutes"<<endl;
}
int main()
{
	int duration;
	cout<<"Enter the time in minutes: ";
	cin>>duration;
	Time obj = duration;
	obj.display();
	return 0;
}
