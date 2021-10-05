#include<iostream>
#include<sstream> // for using stringstream

using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream str(s);

    string word;

    while(str>>word)
    {
        cout<<word<< endl;
    }
}

     /* int  n;
    cin>>n;

ostringstream str1;
str1<<n;

string s;
s=str1.str();

cout<<s;*/
