//What else multiple inheritance can cause in a program, explain it by providing a proper solution.

#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    int k;
	void display()
	{
		cout << "\nThis is display method from Base class A" << endl;
		cout << "The value of k is : " << k << " in class A" << endl;
	}
};

class B : virtual public A{
    public:
	void display1()
	{
		cout << "This is display1 method from class B" << endl;
	}
};

class C : virtual public A{
	public:
	void display2()
	{
		cout << "This is display2 method from class C" << endl;
	}
};

class D : public B, public C{
	public:
	void display3()
	{
		cout << "\nThis is display3 method from class D" << endl;
		cout << "The value of k is : " << k << " in class D" << endl;
	}
};

int main()
{
    D d;
    d.A::k = 10;              	// (d.k = 10;)-> this will show error as the compiler dont know about which k variable to access 
	  d.B::display();             //d.display(); to solve the error we need to use SRO to specify which class we want to use.
    return 0;
}
