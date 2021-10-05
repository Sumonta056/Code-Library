#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    t
    fstream fio;

    string line;
    // * ios::trunc mode delete all content before open
    fio.open("sample.txt", ios::trunc | ios::out | ios::in);

    
    while (fio)
    {

        // Read a Line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "-1")
            break;

        // Write line in file
        fio << line << endl; // * end for after enter
    }

    // Execute a loop until EOF (End of File)
    // point read pointer at beginning of file
    fio.seekg(0, ios::beg);

    while (fio)
    {

        // Read a Line from File
        getline(fio, line);

        // Print line in Console
        cout << line << endl;
    }

    // Close the file
    fio.close();

    return 0;
}
