#include<bits/stdc++.h>
using namespace std;
int main()
{
string str = "Hello";
cout <<"The address of str is : " <<&str<<endl;
cout <<"The value of str is : " <<str<<endl;
str[0] = 'J';
cout <<"The address of str is : " <<&str<<endl;
cout <<"The value of str is : " <<str<<endl;
return 0;
}



