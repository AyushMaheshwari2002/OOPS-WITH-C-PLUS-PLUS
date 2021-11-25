/*WAP to pass two variables in a parameterized constructor during object creation and have same names variables as class member data and constructor parameters. 
Your job is to calculate the remainder of those two numbers.*/

#include<iostream>
using namespace std ;
 
 class Reminder{
 public :
 		int a ;
 		int b;
 		Reminder(int a ,int b)
		 {
 			this->a =a ;
 			this->b = b;
 		}
 		
 		void rem ()
 		{
 		cout << "Reminder is : " << a%b<< endl;
 		}
 };
 
 int main()
 {
 int a = 30;
 int b = 11;
 Reminder r(a,b);
 r.rem();
 return 0;
 }
 
