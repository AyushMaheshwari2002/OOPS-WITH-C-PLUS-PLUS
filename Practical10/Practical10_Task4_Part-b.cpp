/*WAP in which you can add two objects [every object would have 1 integer value] by overloading + operator, 
which eventually would add the data values of those two object by adding the objects.*/

#include<iostream>
using namespace std;

class abc
{
	private:
		int num;
	public:
	abc(int x)
	{
		this->num=x;
	}
	
	void operator +(abc obj)
	{
		cout <<"After adding two objects sum is : ";
 		cout<<num+obj.num;
	}
};

int main()
{
	abc obj(30);
  	abc obj1(50);
  	obj+obj1;
  	return 0;
}
 
