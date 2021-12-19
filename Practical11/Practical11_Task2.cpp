/*Multiple Inheritance in C++ :
    Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these
    classes which prints "I am Mammal", "I am a Marine Aniimal" and "I belong to both the categories : Mammals as well as Marine Animals" respectively. Now, create an object
    for each of the above and try calling :
    
    1. function of Mammals by an object of Mammal
    2. 
    
*/

#include<iostream>
using namespace std;

class Mammals
{
public:
	void displayMammals()
    {
        cout<<"I am Mammal"<<endl;
    }
};

class MarineAnimals
{
public:
	void displayMarine()
    {
        cout<<"I am a Marine Animal"<<endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals
{
public:
	void displayBoth()
    {
        cout<<"I belong to both the categories : Mammals as well as Marine Animals"<<endl;
    }
};

int main()
{
	Mammals A;
	MarineAnimals B;
	BlueWhale C;
	A.displayMammals();
	B.displayMarine();
	C.displayBoth();
	C.displayMammals();
	C.displayMarine();
return 0;
}
