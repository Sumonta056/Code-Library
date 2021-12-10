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
    string s = "10";

    // ! out for write operation
    fstream myfile("Data_Name.txt", ios::out);
    // * myfile.open("Data_Name.txt") ;
    myfile << arr << " " <<s ;
    myfile.close();

    cout << "done" << endl;
}