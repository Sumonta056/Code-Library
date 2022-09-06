#include<bits/stdc++.h>
using namespace std ;

#define ll long long int

bool is_prime(int n)
{

    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int divisor( ll n )
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

    ll count = 0 ;
    //* print divisor
    for(auto it : storeDivisor)
    {
        if(is_prime(it) == true ) count++;
    }

    return count ;

}


int main()
{
    int n ;
    cin >> n ;

    ll counts = 0 ;

    for(int i = 1 ; i <= n ; i++)
    {
        int ans = divisor(i);

        if( ans == 2) counts++;
    }

    cout << counts <<endl;
}