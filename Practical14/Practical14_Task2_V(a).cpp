/* Task 14.2 Perform the following:
    1. Call base class destructor from base class pointer which is holding the child class object.
*/

#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Base Constructor" << endl;
    }
    ~base()
    {
        cout << "Base Destructor" << endl;
    }
};
class child : public base
{
public:
    child()
    {
        cout << "Class Constructor" << endl;
    }
    ~child()
    {
        cout << "Class Destructor" << endl;
    }
};
int main()
{
    base *p;
    child c;
    p = &c;
    delete p;         // BC CC BD
    // p->~base();    BC CC BD CD BD  
    // p->~child();  error: the type being destroyed is 'base', but the destructor refers to 'child'
}
