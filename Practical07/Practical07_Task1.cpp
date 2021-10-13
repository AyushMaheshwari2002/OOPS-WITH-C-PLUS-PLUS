//Print Year, Month, Day Manually by using switch statemant.

#include<iostream>
using namespace std;
int main()
{
int n;
cout <<"\n1. YEAR\n2. MONTH\n3. DAY\n4.EXIT\n"<<endl;
cout << "Enter the value of n : ";
cin >> n;
switch(n)
{
case 1:
cout <<"2021"<< endl;
break;
case 2:
cout <<"October"<< endl;
break;
case 3:
cout <<"Wednesday"<< endl;
break;
case 4:
cout <<"Exiting the program!"<<endl;
break;
default :
cout <<"Not Applicable"<< endl;
break;
}
}


