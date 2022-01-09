//WAP in C++ to read and write from and to a file using ifstream and ofstream.

#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main()
{
	ofstream myfile;
	myfile.open("text.txt");
	myfile<< "this is the text written into the file";
	myfile.close();
	
	ifstream  readfile;
	string data;
	readfile.open("text.txt");
	while(1)
	{
		readfile >>data;
		
		if(readfile.eof())
    {
			cout << data<<endl;
			break;
    }
		else
			cout << data<< " " ;
  }
	readfile.close();
	return 0;
}
 
