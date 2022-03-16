//WAP to add two times in hour and minute illustrating passing object as function arguments.
#include<iostream>
using namespace std;
class time{
	int hour;
	int minute;
	public:
		void getData(int x,int y)
		{
			hour=x;
			minute=y;
		}
		time display()
		{
			cout<<"The FinalTime is :"<<endl;
			cout<<"Hour ="<<hour<<endl;
			cout<<"Minute ="<<minute<<endl;
		}
		void add(time,time);
};
void time :: add(time i ,time j)
	{
		
		hour=i.hour+j.hour;
		minute=i.minute+j.minute;
		
	}
int main()
{
	time t1,t2,t3;
	int h1,m1,h2,m2;
	cout<<"Enter the hour =";
	cin>>h1;
	cout<<"Enter the minute =";
	cin>>m1;
	cout<<"Enter the hour =";
	cin>>h2;
	cout<<"Enter the minute =";
	cin>>m2;
	t1.getData(h1,m1);
	t2.getData(h2,m2);
	t3.add(t1,t2);
	t3.display();
	return 0;
}

