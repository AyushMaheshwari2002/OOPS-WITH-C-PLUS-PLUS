//Catch a Divide by zero exception in z = x/y using "throw runtime_error".

#include<iostream>
using namespace std;

int main()
{
	int a = 49;
	int b =0;

   try {
      if (b ==  0)
      {
         throw b;
         cout <<a/b;               // this statement will never be executed.
      }
      else
      	cout <<a/b;               // only executed if the denominator != 0.
   }
   catch (int b) 
   {
      cout << "runtime_error \n";
   }
   return 0;
}
