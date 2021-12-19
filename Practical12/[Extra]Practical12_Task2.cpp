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
	//contains two display() functions, how?
	public:
	void display3()
	{
		cout << "\nThis is display3 method from class D" << endl;
		cout << "The value of k is : " << k << " in class D" << endl;
	}
};

int main(){

    D d;
    d.display1();
    d.display2();
    d.display3();
    d.k = 10;       //This will work because we use VIRTUAL keyword so compiler will not confuse
    d.display();
    return 0;
}

