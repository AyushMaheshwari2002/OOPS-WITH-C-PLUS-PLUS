//WAP to create print or display Student information containing in Student class by using pointers to object.

#include<iostream>
#include <string>
using namespace std;

class Student{  
public:
	string name;
	int age;
	char sec;
	int marks;
	
	void printDetails()
	{
		cout << "Name : " <<name  << endl << "Age : "<< age<< endl << "Section : " <<sec<< endl<< "Marks : "<<marks<<endl<<endl;
	}
	
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter age : ";
		cin  >>age;
		cout <<"Enter Section : ";
		cin  >>sec;
		cout << "Enter Marks : ";
		cin >> marks; 
		cout << endl;
	}
};

int main()
{
	Student obj;
		cout << "Enter Details of Student : " <<endl;
		obj.getDetails();
	Student * ptr;
	ptr = &obj;
	
	cout << "Details of Student are : "<<endl ;
	ptr->printDetails();	
}
