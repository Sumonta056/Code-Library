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

    // ! out for write operation
    fstream myfile("Data_Name.txt", ios::out | ios::app) ;
    // * myfile.open("Data_Name.txt") ;
    myfile << arr;
    myfile.close();

    cout << "done" << endl;
}