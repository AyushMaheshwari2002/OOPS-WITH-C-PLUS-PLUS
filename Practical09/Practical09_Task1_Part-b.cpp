/*WAP which would contain array of objects [many objects], of a class Student. Student [Name, Age, Year, section, marks], the section would be A,B,C and D.
Your program would be able to return the total marks of students in the college.*/

#include<iostream>
#include <string>
using namespace std;

class Student{  
public:
	string name;
	int age;
	int year;
	char sec;
	int marks;
	
	void printDetails()
	{
		cout << "Name : " <<name  << endl << "Age : "<< age<< endl << "Year : " << year << endl << "Section : " <<sec<< endl<< "Marks : "<<marks<<endl<<endl;
	}
	
	void getDetails()
	{
		cout << "Enter Name : ";
		cin >> name;
		cout <<"Enter age : ";
		cin  >>age;
		cout << "Enter Year : ";
		cin >> year;
		cout <<"Enter Section : ";
		cin  >>sec;
		cout << "Enter Marks : ";
		cin >> marks; 
		cout << endl;
	}
};

int main()
{
	Student obj[5] ;
	for(int i=0 ;i < 4;i++)
	{
		cout << "Enter Details for Student No : "<<i+1 <<endl;
		obj[i].getDetails();
	}
	
	int TotalMarks=0;
	for(int i=0 ;i< 4;i++)
	{
		TotalMarks += obj[i].marks;
	}
	cout  << "Total Marks of Student in College are : " << TotalMarks << endl ;
}
