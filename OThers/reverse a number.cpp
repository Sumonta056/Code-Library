#include<iostream>
using namespace std;

int main()
{
   long long int n,temp,sum=0;
    cout<<"Enter a number : " ;
    cin>>n;

    temp=n;

    while(temp>0)
    {
         int r;
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    cout<<sum;
}
