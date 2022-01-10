// Illustrate the compile time and run time binding using base class pointer, which holds the address of child class.

#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    virtual int add(int a, int b)
    {
        return a + b;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
};
class child : public base
{
public:
    int add(int a, int b)
    {
        return a + b + 1;
    }
    int multi(int a, int b)
    {
        return a / b;
    }
};
int main()
{
    base *p;
    child c;
    p = &c;
    cout << p->multi(10, 20) << " "; // early binding (compile time binding)
    cout << p->add(15, 25);          // late binding (run time binding)
}
