#include<iostream>
#include<sstream>//header file
using namespace std;
int main()
{
    int x=789009;
    //declare output string stream
    ostringstream str1;
    //sending integer as stream into output string
    str1<<x;
    //declare string variable
    string p;
    p=str1.str();
    //print the string
    cout<<p;
}
