/* WAP to create a Parent and child interaction using Inheritance. With this Parent and Child Interaction try to perform these tasks :
    a. Call Parent class method in child class function creating an object of parent class.\
    b. Call Patrent class method in main method by child class object.
*/

#include<iostream>
using namespace std; 
class Parent 
{
  public:
  int x;
  void display()
  {
    x = 100;
    cout <<x <<endl;
  }
};

class Child: public Parent 
{
  public:
  void displayChild()
  {
    x = 5;
    cout << x<<endl;
    display();
  }
};

int main()
{
    Child obj;
    obj.displayChild();
    return 0;
}

