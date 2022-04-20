//wap to do sorting using function template
#include<iostream>
using namespace std;

template<typename H>
H sort (H num)
{
	H a[20];
	H i=0,j=0,temp=0;
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Ascending order of given input is: "<<endl;
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int n,result;
	cout<<"Enter the number you want to enter: ";
	cin>>n;
	result=sort<int>(n);
	
}
