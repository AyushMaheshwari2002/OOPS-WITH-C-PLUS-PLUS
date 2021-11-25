/*WAP to create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters. 
The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for printing the 
area of square has one parameter which is the side of the square. Use multiple constructors to for the initialization.*/

#include<iostream>
#include <string>
using namespace std;

class Area{
public:
	float area;
	
	Area(int len,int wid)
	{
		area = len*wid;
	}
	Area(int side)
	{
		area = side *side;
	}
	void display(){
	cout << "Area  is " << area<<" Square Unit"<<  endl ;
	}
	
};
	
int main()
{
	Area r(30 ,13);
	r.display();
	
	Area s(6);
	s.display();
	
	return 0;
}
