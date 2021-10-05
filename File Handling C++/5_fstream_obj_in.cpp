#include <iostream>

// * must needed for file handling
#include <fstream>
using namespace std;

int main()
{
    char sen[100];

    fstream obj("Data_Name.txt" , ios::in);

    obj.getline(sen, 100);
    cout << sen;
    obj.close();
}