#include<bits/stdc++.h>
using namespace std;

void series(int n)
{
if(n==1)
return;

series(n-1);
cout<<n*(pow(n-1,n-1)+n-1)<<" ";
return;	
}

int main()
{
int n;
cout <<"Enter how many elements you want in series : ";
cin>>n;
series(n);
return 0;
}


