#include <iostream>
using namespace std;
class Employee{
    int Id;
    char name[20];
  public:
	int Salary;
	void input();
friend void Salary(Employee[],int);
};
void Employee::input(){
    cout << "\nEnter Employee Id : ";   
	fflush(stdin);    
    cin >> Id;     
    cout << "\nEnter Employee Name : ";     
    fflush(stdin);
    cin>>name;            
    cout << "\nEnter Employee Salary : ";       
    fflush(stdin);
	cin >> Salary;
}
void Salary(Employee a[], int x){
    Employee temp;
    int i,j;
    for(i=0; i<x; i++)
    {
    for(j=i+1; j<x; j++)
	{         
        if(a[i].Salary< a[j].Salary) 						
		{   
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
		}
    }
	}
	cout<<endl;
	cout<<endl;
    cout<<"***The Employee with highest salary is***"<<endl;
    cout<<"Name: "<<a[0].name<<endl;
    cout<<"Id: "<<a[0].Id<<endl;
    cout<<"Salary: "<<a[0].Salary<<endl;
}
int main()    
{
    int n, i;       
    cout<<"Enter Number of Employees : ";   
	fflush(stdin);  
    cin>>n;    
    Employee E[n];      
    cout<<"\n\n----------ENTER DETAILS OF EMPLOYEES----------\n\n";  
    for(i=0;i<n;i++){           
        cout<<"\n\n Enter details of Employee "<<i+1<<endl;          
        E[i].input();      
    }   
    Salary(E,n);     
    return 0;
}
