/* WAP to add 2 objects of a class using friend function. The class consists of hour and minute as data members input(), sum() and output() */
#include<iostream>
using namespace std;
class add2obj
{
	private:
    int hour,minute;
	public:
	void input(int p,int q)
        {
            hour=p;
            minute=q;
        }
    friend add2obj operator + (add2obj x,add2obj y);
    void output()
        {
        	cout<<"The hour and minute after the sum is"<<endl<<endl;
            cout<<"Hour = "<<hour<<"\tMinute = "<<minute;
        }
};
//Operator function as friend function is called by compiler internally and both objects obj1 & obj2 are passed as actual argument and grabbed by x and y.
add2obj operator + (add2obj x,add2obj y)
{
    add2obj t;
    t.hour=x.hour+y.hour;
    t.minute=x.minute+y.minute;
     
}
int main()
{
    add2obj obj1, obj2,obj5;
    int h,m,hr,mn;
	cout<<"Enter hour and minute for obj1: ";
	cin>>h>>m;
	cout<<endl;
	obj1.input(h,m);
	cout<<"Enter hour and minute for obj2: ";
	cin>>hr>>mn;
	cout<<endl;
	obj2.input(hr,mn);
	obj5=obj1+obj2;
	obj5.output();
}
