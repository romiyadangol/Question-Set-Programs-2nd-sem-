//WAP to add two integers and return the sum using inline functions
#include<iostream>
using namespace std;
class add2int{
	public:
		int a,b;
	inline int sum(int x,int y)
	{
        return x+y;
	}
};
int main()
{
        add2int obj;
        int c,d;
        cout<<"Enter 2 numbers to be added: ";
        cin>>c>>d;
        cout<<endl;
        obj.a=c;
        obj.b=d;
        cout<<"The sum of the given integers is "<<obj.sum(obj.a,obj.b);
        return 0;
}

