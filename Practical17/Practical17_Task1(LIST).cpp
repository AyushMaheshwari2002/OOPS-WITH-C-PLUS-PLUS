/* WAP in C++ with the help of STL:
    a. List:
        1. Iterate a int list using iterator and print it
        2. Find size of a list
        3. Sort a list
        4. Reverse a list
*/ 

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

// Function for printing the elements in the list
void printList(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    list<int> l;
    int n;
    cout << "Enter the size of the List : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        l.push_back(ele);
    }

    // A part of Task
    cout << "\nPrinting List using Iterator : " <<endl;
    printList(l);

    // B part of Task
    cout << "\nSize of the list is : " << l.size() << "\n";

    // C part of Task
    l.sort();
    cout << "\nPrinting list after sorting : \n";
    printList(l);

    // D part of Task
    l.reverse();
    cout << "\nPrinting list after Reversing : \n";
    printList(l);
    return 0;
}
