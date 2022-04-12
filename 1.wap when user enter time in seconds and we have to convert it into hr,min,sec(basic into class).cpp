//wap when user enter time in seconds and we have to convert it into hr,min,sec(basic into class)
#include<iostream>
using namespace std;
class Time
{
	int hr,min,sec;
	public:
		Time(int t)
		{
			cout<<"Basic Type Conversion ==> Class Type Conversion"<<endl;
			hr=t/3600;
			min=(t % 3600)/60;
			sec=(t % 3600)%60;
		}
		void display();
};
void Time::display()
{
	cout<<hr<<" hour " << ":" <<min<<" minutes " << ":" <<sec<<" seconds "<<endl; 
}
int main()
{
	int duration;
	cout<<"Enter time duration in seconds: "<<endl;
	cin>>duration;
	Time t1 = duration;
	t1.display();
	return 0;
}
