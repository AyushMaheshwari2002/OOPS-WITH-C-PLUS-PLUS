/* Base class having a virtual and a pure virtual function.Derived class having same copy of virtual function with changed logic and definition of pure virtual function.
      Perform following tasks:
          1. Try to call child class overriding method from base class pointer.
          2. Try to call child class definition of pure virtual function in child class.
          3. Find out the abstraction in above implementation.
*/


#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    virtual int add(int a, int b) // due to virtual keyword complier will ignore it during compile time
    {
        return a + b;
    }
    virtual int multi(int a, int b) = 0; // due to abstraction complier will not bind this function at compile time  it will bind during runtime
};
class child : public base
{
public:
    int add(int a, int b) //  during runtime this definition will be followed
    {
        return a + b + 1;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};
int main()
{
    base *p;
    child c;
    p = &c;
    cout << endl;
    cout << "Abstraction was in  BASE CLASS in the Above implementation and not in the CHILD CLASS" << endl;
    cout << "because pure virtual function of base was defined in child class" << endl;
}
