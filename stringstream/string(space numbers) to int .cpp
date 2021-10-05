#include<iostream>
#include<sstream>
using namespace std ;
int main()
{
    string s ;
    cin>> s ;

    int a,b,c ;
    char space;
    stringstream convert(s) ;
    convert>>a>>space>>b>>space>>c;

    cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<space;

}
