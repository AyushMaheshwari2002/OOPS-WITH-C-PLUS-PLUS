#include<iostream>
using namespace std;
int main()
{
int *p = {10, 20, 20};
cout << *p;
p++;
cout << *p;
return 0;
}

/*This program will give an initialization error because 
the variable p is a pointer type variable which can hold
a mutable address but we that the variable which hold 
the address of array is immutable so the base address
is never going to change. */

 
