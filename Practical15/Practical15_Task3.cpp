/* WAP in C++ for IO manipulators mentioned below:
a. IOS: hex,dec,skipws,noskipws
b. Istream: ws
c. Ostream: endl, ends, flush
d. Iomanip: setW, setPrecision
*/


#include<iostream>
#include<iomanip>
#include<sstream>
#include<string>
using namespace std ;
 
 int main()
 {
	int n =70;
	cout << hex<< n<< endl;           //hex
	cout << dec<< n<< endl;	           //dec
	
	char  a,b,c;
	stringstream s("  123");
	s>>skipws>>a>>b>>c;             //skipws
	cout <<a <<b<< c<<endl;
	
	stringstream p("  123");
	p>>noskipws>>a>>b>>c;      //noskipws
	cout <<a <<b<< c<<endl;
	
	stringstream t("  this is a string");
	string line;
	getline(t >> ws,line);           //ws
	cout << line<<endl;         //endl

    	cout << "b" << ends;    //ends

    	int num = 45;
    	cout <<endl << setprecision(2) << num << endl;		//setprecission
  
    	int i = 18;
    	cout<<setw(10)<<i;	             //setw
 }
 
