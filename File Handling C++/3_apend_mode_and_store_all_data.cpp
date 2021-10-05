#include <iostream>

// * must needed for file handling
#include <fstream>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter name and age :";

    // * take whole line a input
    cin.getline(arr, 100);

    ofstream myfile("Data_Name.txt", ios::app);
    // * myfile.open("Data_Name.txt") ;
    myfile << arr << endl; // * enter after store
    myfile.close();

    cout << "done" << endl;
}