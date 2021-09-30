#include<iostream>
using namespace  std;
void charFunction()
{
char a = 'A';
cout << "Char Value of a is : "<<a<< endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Char Datatype is : "<<sizeof(char)<<endl;
cout<<endl;
} 
void boolFunction ()
{
bool a = (20 >17);
cout <<"Bool Value of a is : "<< a<< endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Bool Datatype is : "<<sizeof(bool)<<endl;
cout<<endl;
}
void shortFunction()
{
short a = 7;
cout <<"Short Value of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Short Datatype is : "<<sizeof(short)<<endl;
cout<<endl;
}
void integerFunction()
{
int a = 234;
cout <<"Integer Value of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Int Datatype is : "<<sizeof(int)<<endl;
cout<<endl;
}
void LongFunction()
{
long a =987654;
cout <<"Long Value of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Long Datatype is : "<<sizeof(long)<<endl;
cout<<endl;
}
void FloatFunction()
{
float a = 2.2345f;
cout <<"Float Value of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Float Datatype is : "<<sizeof(float)<<endl;
cout<<endl;
}
void DoubleFunction()
{
double a = 22.565765;
cout <<"Double Value of a is : "<<a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Double Datatype is : "<<sizeof(double)<<endl;
cout<<endl;
}
void LongDoubleFunction()
{
long double a = 43755.53656;
cout <<"Long Double of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Long Double Datatype is : "<<sizeof(long double)<<endl;
cout<<endl;
}
void widecharFunction()
{
wchar_t  a = L'~';
wcout <<"Wide Char Value of a is : "<< a<<endl;
cout <<"Size of Variable a is : "<<sizeof(a)<<endl;
cout <<"Size of Wide Char Datatype is : "<<sizeof(wchar_t)<<endl;
cout<<endl;
}
int main()
{
charFunction();
boolFunction();
shortFunction();
integerFunction();
LongFunction();
FloatFunction();
DoubleFunction();
LongDoubleFunction();
widecharFunction();
return 0;
}


