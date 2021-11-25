//WAP to count the total number of calls for a member function from more than one objects. [Lets say, from 3 such Objects]

#include <iostream>
using namespace std;

class A
{
public:
	A() { cout << "A's constructor called " << endl; }
};

class B :public A
{
public:
	B() 
	{ cout << "B's constructor called " << endl;}
	
};

class C: public B
{
public:
	C() 
	{ cout << "C's constructor called " << endl;}
	
};
int main()
{
	C c;

	return 0;
}

