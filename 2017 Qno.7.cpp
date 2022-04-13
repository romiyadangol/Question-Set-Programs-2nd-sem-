#include<iostream>
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
			cout<<"\nBalance : ";
			cin>>balance;
			fflush(stdin);
			
		}
		void s_display()
		{
			cout<<"\n Customer Name: "<<customer_name;
            cout<<"\n Account Number: "<<acc_num;
            cout<<"\n Type: "<<acc_type;
			cout<<"The total amount of money: "<<balance<<endl;
		}
};
class saving:public Account
{
		int s_interest;
		public:
			void compound_interest()
			{
				int rate1,time1;
				rate1 = 10%;
				cout<<"\nEnter time: ";
				cin>>time1;
				s_interest=balance*pow(1+rate/100,time1);
				
				
			}
	//compound intrest =10%
};
class current:public Account
{
	int c_interest;
		public:
			void simple_interest()
			{
				int rate2,time2;
				rate2 = 5%;
				cout<<"\nEnter time: ";
				cin>>time2;
				c_interest=balance*time2*rate2;
				
				
	//simple interest=5%
};
int main()
{
	current obj1;
	saving obj2;
	obj1.getdata();
	
}
