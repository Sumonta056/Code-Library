
#include<iostream>
using namespace std;

int main()
{
    int x=2;

    int *p; //pointer declaration

    p=&x; // x r address


    cout<<x<<endl;
    cout<<&x<<endl; // x r address
    cout<<p<<endl; // x address
    cout<<*p<<endl; // x r value
}
