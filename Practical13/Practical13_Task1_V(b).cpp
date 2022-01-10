/*  To overload add method for two parameters with int and float data types in Base class. Along with it create a Derived class from 
    the Base class named as child. The class child should override one of the overloaded method from base class.
        Perform following tasks:
              1. Try calling overriding method from child class object.
              2. Write name of the method which is not seen by the child class object

              Create two versions:
              version 02 : with 'using' keyword.
*/
  
#include <iostream>
#include <string>
using namespace std;
class base
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    string add(char a, char b)
    {
        string sum;
        sum = sum + a;
        sum = sum + b;
        return sum;
    }
};
class child : public base
{
public:
    int add(int a, int b)
    {
        return a + b + 1;
    }
};
int main()
{
    child obj2;
    int ans1 = obj2.add(10, 20);
    float ans2 = obj2.add(5.5f, 2.15f);
    cout << "without 'using' keyword : " << endl;
    cout << ans1 << endl;
    cout << ans2;
}
/*
not visible functions
without 'using' keyword
    base -int add(int,int)
         -float add(float ,float)
         -string add(char,char)
*/
