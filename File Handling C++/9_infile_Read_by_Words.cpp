ifstream inFile("file.txt")
    string words;
while (inFile >> words)
{
    cout << words << endl;
}