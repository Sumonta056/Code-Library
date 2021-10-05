#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // * fstream ( class ) , FileName (its class name)
    fstream FileName;
    FileName.open("FileName", ios::out);
    if (!FileName)
    {
        cout << "Error while creating the file";
    }
    else
    {
        cout << "File created successfully";
        FileName.close();
    }
    return 0;
}