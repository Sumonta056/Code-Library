#include <iostream>

// * must needed for file handling
#include <fstream>
using namespace std;

int main()
{
    char sen[100];

    ifstream obj("Data_Name.txt");

    obj.getline(sen, 100);
    cout << sen;
    obj.close();
}