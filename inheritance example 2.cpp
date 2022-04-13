#include<iostream>
using namespace std;
class X{
	
	protected:
		int m;
		public:
			void setvalue(int z)
			{
				m=z;
			}
			void output()
			{
				cout<<"\nValue of p is : "<<m;
			}
};
class Y:public X
{
		public:
			void print()
			{
				cout<<"\nValue of m is : "<<m;
			}
			
};
int main()
{

	Y obj1;
	obj1.setvalue(10);
	obj1.print();
	return 0;
}
