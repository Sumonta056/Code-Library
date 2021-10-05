#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    long long int n1;
    cin>>n1;

    ostringstream convert;

    convert<<n1;

    string s ;
    s=convert.str();

    long long int n,i,j;
    n=s.length();

    if(n%2==0) {
         i=n/2;
         cout<<s[i-1]<< " " << s[i];

    }
    else {
        i=(n+1)/2;

        cout<<s[i-1];
    }
}
