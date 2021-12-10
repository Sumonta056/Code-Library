// C++ code to demonstrate the working of
// insert() function

#include <iostream>
#include <list> // for list operations
using namespace std;

int main()
{
	// declaring list
	list<int> list1;

	// using assign() to insert multiple numbers
	// creates 3 occurrences of "2"
	list1.assign(3, 2);

	// initializing list iterator to beginning
	list<int>::iterator it = list1.begin();

	// iterator to point to 3rd position
	advance(it, 2);

	// using insert to insert 1 element at the 3rd position
	// inserts 5 at 3rd position
	list1.insert(it, 5);

	// Printing the new list
	cout << "The list after inserting"
		<< " 1 element using insert() is : ";
	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;

	// using insert to insert
	// 2 element at the 4th position
	// inserts 2 occurrences
	// of 7 at 4th position
	list1.insert(it, 2, 7);

	// Printing the new list
	cout << "The list after inserting"
		<< " multiple elements "
		<< "using insert() is : ";

	for (list<int>::iterator i = list1.begin();
		i != list1.end();
		i++)
		cout << *i << " ";

	cout << endl;
}
The list after inserting 1 element using insert() is : 2 2 5 2 
The list after inserting multiple elements using insert() is : 2 2 5 7 7 2