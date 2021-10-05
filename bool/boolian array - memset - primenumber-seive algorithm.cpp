#include<iostream>
#include<cstring> // for using  memset
using namespace std;
int main()
{
    int n;  cin>>n;

    bool prime[n+1];
    memset(prime , true , sizeof(prime));

    for( int p=2 ; p*p<=n ; p++)
    {
        if(prime[p]== true)
        {
            for(int i = p*p ; i<=n ; i=i+p )
            {
                prime[i]=false;
            }
        }
    }

    for(int i = 2 ; i<=n ; i++)
    {
        if(prime[i]==true)  cout<<i<<endl;
    }




}
