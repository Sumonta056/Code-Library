
#include<iostream>
#include<vector>
#include<sstream>

using namespace std;

vector<int> stringtoint( string s )
{

    vector<int>convertedint;

    stringstream convert(s);

    int number;
    char space;

    while(convert>>number)
    {
     convertedint.push_back(number);

     convert>>space;

    }

    return convertedint;
}

int main()
{
    string s;
    cin>>s;

    vector<int> arr = stringtoint(s);

    for(int i = 0 ; i<arr.size() ; i++)
    {
        cout<<arr[i]<<endl;
    }
}
