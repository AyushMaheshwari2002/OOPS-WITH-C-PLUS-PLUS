/* WAP in C++ to create a genetic add function for given tasks:
    a. Perform add over two integers and return integer
*/

#include<iostream>
using namespace std; 
 template <typename T>
T add(T x, T y)
{
	return x+y;
}

int main()
{
	int a ,b;
	cout << "Enter value of a and b : ";
	cin >> a >> b;
	cout << add<int>(a,b);
	return 0;
}
