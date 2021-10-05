#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream FileName;
    FileName.open("FileName.txt", ios::in);
    if (!FileName)
    {
        cout << "File doesn’t exist.";
    }
    else
    {
        char x;
        while (1)
        {
            FileName >> x; // * reading operation
            if (FileName.eof()) // * loop continues untill the end of file reaches too
                break;
            cout << x;
        }
    }
    FileName.close();
    return 0;
}