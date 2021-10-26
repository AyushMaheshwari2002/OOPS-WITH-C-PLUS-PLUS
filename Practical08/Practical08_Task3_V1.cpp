#include<iostream>
using namespace std;

int main()
{
int a = 10;
int *p = &a;
int **q = &p;

cout <<"Value of a : "<< a <<endl;

*p = 20;
cout <<"Value of single pointer : "<< *p <<endl;

**q = 30;
cout <<"Value of double pointer : "<< **q <<endl;
return 0;
}


