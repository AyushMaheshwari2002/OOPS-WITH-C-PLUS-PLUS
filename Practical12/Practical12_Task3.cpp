/* WAP to illustrate the role of Access Modifiers[private, public, protected] seperately in:
    a. Accessing base class elements in derived class or inheritance 
    b. Accessing base class elements through objects
*/

#include<iostream>
using namespace std; 
class A 
{
  private :
	  int y;
  protected :
	  int z;
  public :
	  int x;
	  void display()
	  {	
      cout << "x = " <<x<< endl;
		  cout << "z = " <<z<< endl; 
    }
};
class B: public A {
public:
	void display()
	{
	    z = 10;
	    cout << "z = " <<z<< endl;
	}
	
};
class C: protected A{
public:
	void display()
	{ 
	    x= 100;
    	z= 50;
	    cout << "x = " <<x<< endl;
		  cout << "z = "<< z<< endl;
	}
};
class D : public C{

};
int main()
{
	B objB;
	C objC;
	D objD;
	objB.display();
	objC.display();
}
