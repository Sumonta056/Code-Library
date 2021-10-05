
// C++ code to demonstrate copy of vector
// by assign()
#include<iostream>
#include<vector> // for vector
#include<algorithm> // for copy() and assign()
#include<iterator> // for back_inserter
using namespace std;
  
int main()
{
    // Initializing vector with values
    vector<int> vect1{1, 2, 3, 4};
  
    // Declaring another vector
    vector<int> vect2;
  
    // Copying vector by assign function
    vect2.assign(vect1.begin(), vect1.end());
  
    cout << "Old vector elements are : ";
    for (int i=0; i<vect1.size(); i++)
        cout << vect1[i] << " ";
    cout << endl;
  
    cout << "New vector elements are : ";
    for (int i=0; i<vect2.size(); i++)
        cout << vect2[i] << " ";
    cout<< endl;
  
    // Changing value of vector to show that a new
    // copy is created.
    vect1[0] = 2;
  
    cout << "The first element of old vector is :";
    cout << vect1[0] << endl;
    cout << "The first element of new vector is :";
    cout << vect2[0] <<endl;
  
    return 0;
}