#include<iostream>
using namespace std;

int rungcd( int i , int j)
{
    if(i==0 ) return j;

    return j%i , i;
}


int main()
{
    int a,b;
    cin>>a>>b;

    int n;
    n=rungcd(a,b);


    cout<<n;
}
