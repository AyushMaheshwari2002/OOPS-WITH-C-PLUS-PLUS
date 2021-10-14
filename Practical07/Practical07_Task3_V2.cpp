//Print Reverse of the 2D array by substracting all the elements of array by 10.

#include <iostream> 
using namespace std;

int main () 
{ 
	int arr[3][3], i, j;
	cout << "Enter the values in the array : \n"; 
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++) 
		cin >> arr[i][j];
	} 
	cout <<"Entered elements in the array are : "<<endl;
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{ 
			cout << arr[i][j] << " ";
		}
		cout << endl;
	} 
	
	
	cout << "\nThe resversed array is : \n"; 

	for (i=0; i<3; i++) 
	{
 		for (j=0; j<3; j++) 
			cout << (10-arr[i][j]) << " "; 
		cout << endl; 
	} 
	return 0; 
} 


