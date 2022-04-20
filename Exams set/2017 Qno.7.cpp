#include<iostream>
#include<math.h>
using namespace std;
class Account
{
	protected:
		string customer_name;
		int acc_num;
		string acc_type;
		int balance;
		
		public:
		void getdata()
		{
			cout<<"------Details of Customer--------"<<endl;
			cout<<"\nCustomer Name: ";
			getline(cin,customer_name);
			fflush(stdin);
			cout<<"\nAccount Number: ";
			cin>>acc_num;
			fflush(stdin);
			cout<<"\nAccount Type: ";
			getline(cin,acc_type);
			fflush(stdin);
		}
		void s_display()
		{
			cout<<"---------------------------------";
			cout<<"\n Customer Name: "<<customer_name;
            cout<<"\n Account Number: "<<acc_num;
            cout<<"\n Type: "<<acc_type;
		
		}
};
class saving:public Account
{
		int s_interest;
		int balance;
		public:	
		void deposit()
		{
			cout<<"Enter Balance :"<<endl;
			cin>>balance;
		}
			void compound_interest()
			{
				float rate1;
				int time1;
				rate1 = 0.1;
				cout<<"\nEnter time: "<<endl;
				cin>>time1;
				s_interest=balance*pow((1+rate1/100),time1);
			}
			void s_display()
			{
				cout<<"Total Balance in Saving Account:"<<s_interest<<endl;
			}
	//compound intrest =10%
};
class current:public Account
{
	int c_interest;
		public:
			void simple_interest()
			{
				float rate2;
				int time2;
				rate2 = 0.05;
				cout<<"\nEnter time: "<<endl;
				cin>>time2;
				c_interest=balance*time2*rate2;
			}
			void c_display()
			{
				cout<<"Total Balance in Current Account:"<<c_interest<<endl;
			}
				
	//simple interest=5%
};
int main()
{
	saving obj1;
	current obj2;
	obj1.getdata();
	obj1.deposit();
	obj1.compound_interest();
	obj1.s_display();
	obj2.getdata();
	obj2.simple_interest();
	obj2.c_display();
	return 0;
}
