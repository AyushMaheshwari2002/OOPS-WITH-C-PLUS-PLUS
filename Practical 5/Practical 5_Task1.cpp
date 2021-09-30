#include<iostream>
using namespace  std;
void charFunction()
{
char a = 'A';
cout << "Char Value of a is : "<<a<< endl;
} 
void boolFunction ()
{
bool a = (20 >17);
cout <<"Bool Value of a is : "<< a<< endl;
}
void shortFunction()
{
short a = 7;
cout <<"Short Value of a is : "<< a<<endl;
}
void integerFunction()
{
int a = 234;
cout <<"Integer Value of a is : "<< a<<endl;
}
void LongFunction()
{
long a =987654;
cout <<"Long Value of a is : "<< a<<endl;
}
void FloatFunction()
{
float a = 2.2345f;
cout <<"Float Value of a is : "<< a<<endl;
}
void DoubleFunction()
{
double a = 22.565765;
cout <<"Double Value of a is : "<<a<<endl;
}
void LongDoubleFunction()
{
long double a = 43755.53656;
cout <<"Long Double of a is : "<< a<<endl;
}
void widecharFunction()
{
wchar_t  a = L'~';
wcout <<"Wide Char Value of a is : "<< a<<endl;
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

