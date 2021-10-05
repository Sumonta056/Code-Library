#include<iostream>
using namespace std;

int main()
{
    int n,n1,n2,fibo;
    n1=0;
    n2=1;

    cin>>n;
    cout<<n1<<endl<<n2<<endl;
    int i=1;
    while(i<n)
    {

        fibo=n1+n2;

        cout<<fibo<<endl;

        n1=n2;
        n2=fibo;



        i++;
    }
}
