/*WAP to create a directory that contains the following information.
(a) Name of a person
(b) Address
(c) Telephone Number (if available with STD code)
(d) Mobile Number (if available)
(e) Head of the family
*/

#include<iostream>
using namespace std ;
 
 class Details{
 public :
 	string Name;
	string Address;
	unsigned long Telephone ;
	unsigned long  Mobile; 
	 string Head ; 
	 
	 void getDetails()
	 {
	 	cout << "Enter Name : ";
	 	cin >> Name;
	 	cout << "Enter Address : ";
	 	cin >> Address;
	 	cout << "Enter Telephone Number (if available with STD code) : ";
	 	cin >> Telephone ;
	 	cout << "Enter Mobile Number (if available) : ";
	 	cin >> Mobile;
	 	cout << "Name of Head of the Family : ";
	 	cin >> Head;
	 	cout << endl;
	 }
	 
	 
	 void printDetails(){
	 cout << "Name of Person : " << Name<<endl << "Address : " << Address << endl << "Telephone Number : " << Telephone << endl ;
	 cout << "Mobile Number : " << endl << "Head of Family : " << Head << endl << endl;
	 }

 };
 
 int main()
 {
 	Details D[3];
 	for (int i=0 ;i< 3;i++)
 	{	
 		cout << "Enter Details for Person No. "<<i+1 <<endl;
		D[i].getDetails();
 	}
 	
 	string checker;
 	cout << "Enter Name of the head of family to get data : ";
 	cin >> checker;
 	for(int i=0;i< 3 ;i++)
 	{
 		string s = D[i].Head;
 		
 		if(!(s.compare(checker)))
 			D[i].printDetails();
 	}
 	return 0;
 }
