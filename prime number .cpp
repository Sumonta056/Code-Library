#include<iostream>
using namespace std;
int main()
{
    int k; cin>>k;
   int sum=0;

    for(int i = 2 ; i<=k ; i++)
    {
        if(k%i==0 && i!=k )
        {
            sum=1;
            break;
        }
    }

    if(sum==0) cout<<"YES";
    else cout <<"No";
}
