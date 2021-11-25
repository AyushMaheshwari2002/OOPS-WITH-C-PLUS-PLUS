/*Perform Call by value, call by Address for swapping value of a and b:
int a = 10;
int b = 20;
V1). Swap(a,b); //call by Value [void swap(int a, int b){}]
*/

#include<iostream>
using namespace std;

void swap(int a, int b)
{
  int temp=a;
  a=b;
  b=temp;
  cout<<"Swap value in swap function : "<<a<<" "<<b<<endl;
 }
 
int main()
{
 int a=10;
 int b=20;
 cout<<"Value before swapping : "<<a<<" "<<b<<endl;
 swap(a,b);
 cout<<"Value after swapping in main function : "<<a<<" "<<b<<endl;
 return 0;
}
