/*Perform Call by value, call by Address for swapping value of a and b:
int a = 10;
int b = 20;
V3). Swap(&a,&b); //call by Address
*/

#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
  int temp=*x;
  *x=*y;
  *y=temp;
  cout<<"Swapped value in swap function : "<<*x<<" "<<*y<<endl;
 }
int main()
{
 int a=10;
 int b=20;
 cout<<"Value before swapping : "<<a<<" "<<b<<endl;
 swap(&a,&b);
 cout<<"Value after swapping in main function : "<<a<<" "<<b<<endl;
 return 0;
 }
