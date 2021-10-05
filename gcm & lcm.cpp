#include<iostream>
using namespace std;

int main()
{
int n1,n2;
    cout<<"Enter two number:" ;
    cin>>n1>>n2;

 int rem;
 int a=n1, b=n2;
    while(n2>0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
cout<<"GCD : "<<n1<<endl;
cout<<"LCD : "<<(a*b)/n1;
}
