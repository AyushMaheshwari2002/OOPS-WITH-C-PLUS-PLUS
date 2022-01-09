/* WAP in C++ with the help of STL :
    c. Map:
          1. Insert elements into a <int, string> map
          2. insert elements in random order
          3. Iterate this map using iterator and print its keys and values
          4. Find an element as key from this map
          5. assigning the elements from map1 to map2
          6. remove all elements with key = x (any key present in map)
          7. Find size, max size of a map
          8. checks if this map is empty or not
          9. Clear a map
*/

#include <bits/stdc++.h>
#include <map>
#include <algorithm>
#include <iterator>
using namespace std;

// Function for printing the elements in a map
void printmap(map<int, string> v)
{
    map<int, string>::iterator it;
    for (it = v.begin(); it != v.end(); ++it)
        cout << it->first << " " << it->second << "\n";
    cout << '\n';
}
int main()
{
    map<int, string> m;

    // Inserting Elements in Random order
    m.insert(pair<int, string>(6, "Map"));
    m.insert(pair<int, string>(3, "Iterator"));
    m.insert(pair<int, string>(8, "pair"));
    m.insert(pair<int, string>(1, "coders"));
    m.insert(pair<int, string>(9, "algorithm"));
    m.insert(pair<int, string>(2, "begin"));
    m.insert(pair<int, string>(5, "end"));
    
	// printing map
    printmap(m);
    
	// 4th part of Task
    // Find an element as key from this map
	auto itr = m.find(3);
    cout << "itr is poiting to \n"
         << itr->first << " " << itr->second << " \n";
    
	// 5th Task Assigning one map to another
    map<int, string> copyMap = m;
    cout << "Printing copyMap :\n";
    printmap(copyMap);
    
	// Deleting a key from map
    cout << "Deleting a key-value from copyMap : 9 algorithm\n";
    copyMap.erase(9);
    cout << "Printing map After deleting key = 9 from it\n";
    printmap(copyMap);
    
	// Finding size and max size of map
    cout << "Size of the map is : " << copyMap.size() << endl;
	cout << "maxSize of map is : " << copyMap.max_size() << "\n";
    
	// Checking a map is empty or not
    cout << "Checking map is empty or not after :\n";
    if (copyMap.empty())
        cout << "Map is empty\n";
    else
        cout << "Map is not empty\n";
    
	// Clearing a map
    copyMap.clear();
    cout << "Printing a Map after Clearing it : ";
    printmap(copyMap);
    return 0;
}
