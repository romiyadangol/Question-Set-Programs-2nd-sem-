#include<iostream>
#include<math.h>
using namespace std;
class Account
{
	protected:
		string customer_name;
		int acc_num;
		
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
		}
		void display()
		{
			cout<<"---------------------------------";
			cout<<"\n Customer Name: "<<customer_name;
            cout<<"\n Account Number: "<<acc_num;
		
		}
};
class saving:public Account
{
	public:
		float amt;
		float p1,t1;
		public:	
		void input()
		{
			cout<<"Enter principle :"<<endl;
			cin>>p1;
			cout<<"\nEnter time: "<<endl;
			cin>>t1;
		}
			float compound_interest()
			{
				float rate1;
				rate1 = 10;
				amt=p1*pow((1+rate1/100),t1);
				return amt;
			}
			
	//compound intrest =10%
};
class current:public Account
{
	public:
		float SI;
		float p2,t2;
		public:
			void input1()
			{
				cout<<"Enter principle :"<<endl;
				cin>>p2;
				cout<<"\nEnter time: "<<endl;
				cin>>t2;	
			}
			float simple_interest()
			{
				float rate2;
				rate2 = 5;
				SI=(p2*t2*rate2)/100;
				return SI;
			}
		
				
	//simple interest=5%
};
int main()
{
	int x;
	Account obj;
	saving obj1;
	current obj2;
	obj.getdata();
	cout<<"***** ENTER YOUR CHOICE *****"<<endl;
	cout<<"\n 1) Savings Account "<<endl;
	cout<<"\n 2) Current Account "<<endl;
	label:
	cout<<"Please Enter The Account You Want To Make ";
	cin>>x;
	if(x!=1 && x!=2)
	{
		cout<<"Error! Please Enter The Number 1 or 2";
		goto label;
	}
	switch (x){
		case 1:
			obj1.input();
			obj.display();
			cout<<endl;
			cout<<"The Compound Interest is "<<obj1.compound_interest();
			cout<<endl;
			break;
			case 2:
			obj2.input1();
			obj.display();
			cout<<endl;
			cout<<"The Simple Interest is "<<obj2.simple_interest();
			cout<<endl;
			break;
			default:
				break;
	}
	return 0;
}
	
