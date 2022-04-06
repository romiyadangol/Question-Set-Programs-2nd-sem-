//wap wher user enter hour ,minutes and seconds and the outpput is displayed in seconds
#include<iostream>
using namespace std;
class Time
{
	int hr,min,sec;
	public:
		Time(int a,int b,int c)
		{
			hr=a;
			min=b;
			sec=c;
		}
		operator int()
		{
			cout<<"Class Type to Basic Type Conversion..."<<endl;
			return(hr*3600+min*60+sec);
		}
		~Time()
		{
			cout<<"\nDestructor Called..."<<endl;
		}
};
int main()
{
	int h,m,s,duration;
	cout<<"Enter Hours: "<<endl;
	cin>>h;
	cout<<"Enter Minutes: "<<endl;
	cin>>m;
	cout<<"Enter Seconds: "<<endl;
	cin>>s;
	Time t(h,m,s);
	cout<<"using constructor"<<endl<<endl;
	duration=t;
	cout<<"Total time dutration in seconds: "<<duration<<endl;
	cout<<"\n2nd method operator overloading "<<endl<<endl;
	duration = t.operator int();
	cout<<"Total time dutration in seconds: "<<duration;
	return 0;
}
