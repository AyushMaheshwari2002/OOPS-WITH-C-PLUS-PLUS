/* Task 14.2 Perform the following:
    2. Call child class destructor from base class pointer which is holding the child class object.
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
    virtual ~base()
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
    delete p;
}
