// WAP in which you write a friend function to overload a less than '<' operator in C++.

#include<iostream>
#include<string.h>

using namespace std;

class A{
	string s ;
public:

		A(string x)
		{
			this->s = x;
		}
		
		friend int operator < (A b, A a);
};

int  operator < (A b, A a)
		{
			if((a.s).length() == (b.s).length())
				return 1;
			else
				return 0;
		}
int main()
{
	A a("Ayush") , b("Dehradun");
	
	if(a < b) 			              // a<b can be also called as :   a.operator < (b)   OR    a operator < (b).
		cout<< "String are equal."<<endl;
	else
		cout<< "String are not equal."<<endl;
	
}

