/*WAP in which you can add two objects [every object would have 1 integer value] by overloading + operator, 
which eventually would add the data values of those two object by adding the objects.*/

#include<iostream>
#include<string>
using namespace std;

class B{
public:
	int x;
};
	
class A{
public:
	string s ;
		string operator + (B b)
		{
		 	return  (s + to_string(b.x));
		}
};

int main()
{
	A a ,c;
	a.s = "Ayush";
	B b ;
	b.x = 2021;
	
	cout << "String is : "<< a+b << endl; 
	return 0;
}
 
