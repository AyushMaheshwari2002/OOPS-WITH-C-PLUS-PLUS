/* WAP in C++ to create a genetic add function for given tasks:
    b. Perform add over one int and one float and return double
*/

#include<iostream>
using namespace std; 
template <typename T1, typename T2, typename T3>
T3 add(T1 x, T2 y)
{
	return x+y;
}

int main()
{
	int a ;
	float b ;
	cout << "Enter value of a and b : ";
	cin >> a >> b;
	cout << "Sum is : " << add<int, float , double>(a,b);
	return 0;
}
