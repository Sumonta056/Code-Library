#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll prime[10000004] = {0};

/* Linear Sieve -> prime[i] = 1 represents the number if not prime.
                   prime[i] = 0 represents the number if prime. */
void sieve()
{
    ll n=10000004;
    prime[1]=1;
    for(ll i=2;i<=n;i++)
    {
            for(int j=2;i*j<=n;j++)
            {
                prime[j*i]=1;
            }
    }
}

ll prime_in_range[10000004];

// Function to count primes in range.
void count_prime()
{
    prime_in_range[0] = 0;
    prime_in_range[1] = 0;
    prime_in_range[2] = 1;
    
    for(int i=3 ; i<=10000004 ; i++)
    {
        if(prime[i] == 0)  // if the number if prime
        {
            prime_in_range[i] = prime_in_range[i-1] + 1;
        }
        else
        {
            prime_in_range[i] = prime_in_range[i-1];
        }
    }
}