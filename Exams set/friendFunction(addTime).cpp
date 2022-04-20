/*WAP to add two objects of a class using friend function.the class consists of hour and minute as its data members..input(),sum(),output()*/
#include<iostream>
using namespace std;
class add{
		  int hour;
		  int minute;
		public:
		  	void input(int x, int y)
		  	{
		  		hour=x;
				minute=y;	
			}
			friend add sum(add[]);
		public:
			void output()
			{
				cout<<"The final time is: "<<hour<<" hr : "<<minute<<" min"; 
			}	
};
add sum(add t[])
{
	add finalTime;
	int i=0,j=1;
	finalTime.minute=t[i].minute+t[j].minute;
	finalTime.hour=finalTime.minute/60;
	finalTime.minute=finalTime.minute%60;	
	finalTime.hour=finalTime.hour+t[i].hour+t[j].hour;
	return finalTime;

}
int main()
{
	add time[2];
	add fe;
	int h=0,m=0;
	for(int i=0;i<2;i++)
	{
		cout<<"For the "<<i+1<<" time"<<endl;
		cout<<"Enter the hour:";
		cin>>h;
		cout<<"Enter the miniute:";
		cin>>m;
		time[i].input(h,m);
	}
	fe=sum(time);
	fe.output();
	
	return 0;
}
