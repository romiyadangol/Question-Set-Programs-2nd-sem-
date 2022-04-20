//WAP to take 10 emplouyess details and caclculate the highest salary using class and object concept(freind function)
#include<iostream>
using namespace std;
class employee
{
	char name[50];
	int id;
	int salary;
	public:
		void input()
		{
			cout<<"input your name: ";
			cin.get(name, 50);
			cout<<"input your ID: ";
			cin>>id;
			cout<<"input salary: ";
			cin>>salary;
			fflush(stdin);
		}
		employee process(employee x[10])
		{
			employee temp;
			int m,n;
			for(m=0;m<10;m++)
			{
				for(n=m+1;n<10;n++)
				{
					if(x[m].salary>x[n].salary)
					{
						temp=x[m];
						x[m]=x[n];
						x[n]=temp;
					}
				}
			}
			return x[9];
		}
		friend void output(employee);
};
void output(employee high)
{
	cout<<"The employee with the highest id is:\n"<<"name: "<<high.name<<"\nid: "<<high.id<<"\nsalary: "<<high.salary;
}
int main()
{
	employee rec[10],ct;
	for(int i=0;i<10;i++)
	{
		rec[i].input();
	}
	ct=ct.process(rec);
	output(ct);
	return 0;
}
