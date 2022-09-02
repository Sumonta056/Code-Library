#include<bits/stdc++.h>
using namespace std;

#define ll long long int


void divisor( ll n )
{
    vector<ll> storeDivisor;

    for(ll i = 1 ; i <= sqrt(n) ;  i++)
    {
        if( n % i == 0)
        {
            if( n / i == i) storeDivisor.push_back(i) ;
            else
            {
                storeDivisor.push_back(i);
                storeDivisor.push_back(n/i);
            }
        }
    }

    //* print number of divisor
    cout << storeDivisor.size() << endl;

    //* print divisor
    sort(storeDivisor.begin() , storeDivisor.end()) ;
    
    for(auto it : storeDivisor)
    {
        cout << it << " " ;
    }

}

int main()
{
    ll n = 30;

    divisor(n) ;

    return 0 ;


}