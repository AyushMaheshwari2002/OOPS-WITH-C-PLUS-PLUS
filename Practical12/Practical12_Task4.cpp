/* Execution Flow of Constructors and Destructors in C++ :
    a. WAP to illustrate the calling and execution flow of Constructors in inheritance.
    b. WAP to illustrate the calling and execution flow of Destructors in inheritance.
    c. Pass parameters to base class through derived class construictor.
*/

#include<iostream>
using namespace std;
class A
{
	public:
	int k;
	A(int y)
	{
		k = y;
	}
	~A()
	{
		cout<<"Destructor of class A"<<endl;
	}
};
class B:public A
{
	public:
	int k;
	B(int y):A(10)
	{
		this->k = y;
	};
	void showData1()
	{
		cout<<"class A :: k = "<<A::k<<endl;
		cout<<"class B :: k = "<<this->k<<endl;
	}
	~B()
	{
		cout<<"Destructor of class B"<<endl;
	}
};
class C:public B
{
	public:
	int r;
	C(int y):B(20)
	{
		r=y;
	};
	void showData2()
	{
		showData1();
		cout<<"class C :: r = "<<this->r<<endl;
	}
	~C()
	{
		cout<<"Destructor of class C"<<endl;
	}
};
int main()
{
	C obj(30);
	obj.showData2();
	cout<<"\nRunning destructors are : "<<endl;
}
