//Function Template 
#include<iostream>
using namespace std;

template<typename R>
R sum (R x,R y)
{
	return (x+y);
}

int main()
{
	cout<<sum<int>(3,4)<<endl;
	cout<<sum<double>(2.0,3.5)<<endl;
	return 0;
}


