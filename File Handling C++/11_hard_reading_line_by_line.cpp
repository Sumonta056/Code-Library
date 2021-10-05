#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("Data_Name.txt", ios::in);
    if (!myfile)
    {
        cout << "File doesn’t exist.";
    }
    else
    {
        string x;
        while (1)
        {
            // *  myfile >> x;      // * reading operation by word
            getline(myfile, x);
            if (myfile.eof()) // * loop continues untill the end of file reaches too
                break;
            cout << x << endl;
            ;
        }
    }
    myfile.close();
    return 0;
}