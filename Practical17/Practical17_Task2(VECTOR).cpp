/* WAP in C++ with the help of STL:
    b. Vector:
        1. Insert elements into a int vector
        2. Iterate this vector using iterator and print it
        3. Find size of a capacity and max size of a vector
        4. Resize a vector
        5. checks if the vector is empty or no
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// Function for printing the elements in a vector
void printvector(vector<int> v)
{
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;

	// A part of Task
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    // B part of Task
    cout << "\nPrinting List using Iterator : " <<endl;
    printvector(v);

    // C part of Task
    cout << "\nSize of the vector is : " << v.size() << endl;
	cout << "Capacity of vector is : " << v.capacity() << endl;
    
	// D part of Task
    v.resize(2 * n, 0);
    cout << "\nPrinting vector after resizing and intialising after 0 : \n";
    printvector(v);

    // E part of Task
    cout << "\nChecking vector is empty or not : \n";
    if (v.empty())
        cout << "Vector is empty.\t";
    else
        cout << "Vector is not empty.";
    return 0;
}
