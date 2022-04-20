//wap toconcatenate two strings by overloading binary operator (use string class /character array)
#include<iostream>
#include<string.h>
using namespace std;
class String
{
	char str[30];
	public:
		void getdata()
		{
			cout<<"Enter a string: "<<endl;
			cin.getline(str,30);
		}
		void print()
		{
			cout<<"Strings are : "<<str<<endl;
		}
		//binary operator overloading
		String operator +(String X)
		{
			String obj;
			strcpy(obj.str,str);
			strcat(obj.str,X.str);
			return obj;
		}
};
int main()
{
	String str1,str2,str3;
	str1.getdata();
	str2.getdata();
	str3=str1+str2;
	str3.print();
	return 0;
}
