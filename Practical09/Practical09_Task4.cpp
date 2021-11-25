/*WAP in which you create a Student class having basic information for each student, like name, age and marks. 
By using friend function add marks of all the students [lets say 3 objects] and print it.*/

#include<iostream>
using namespace std; 

class Students{
	string name;
	int age;
	int marks;
	
public:
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter age : ";
		cin  >> age;
		cout << "Enter Marks : ";
		cin >> marks; 
		cout << endl;
	}
	
	friend int sum(Students);
};

int sum (Students s)
{
	return s.marks;
}

int main()
{
	Students obj[3] ;
	for(int i = 0; i < 3; i++)
	{
		cout << "Enter Details for Student No. "<<i+1 <<endl;
		obj[i].getDetails();
	}
	int TotalMarks=0;
	for(int i = 0; i < 3; i++)
	{
		TotalMarks += sum(obj[i]);
	}
	cout << "Total Marks of Student are : " << TotalMarks<<endl ;
}

