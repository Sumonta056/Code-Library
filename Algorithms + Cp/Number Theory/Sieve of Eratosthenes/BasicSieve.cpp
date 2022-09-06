
/*
    ! data : 10^8
    ! time : O(nloglog(n))

    ! care : use long long 

    * Algorithm :
Print all prime numbers less than 15.

Create list = 2,3,4,5,6,7,8,9,10,11,12,13,14,15

num=2.

* traverse from 2 to √15.

* num =2. Remove all multiples of 2 then list= [ 2,3,0,5,0,7,0,9,0,11,0,13,0,15 ]

num=3, immediate non zero number.

Mark all multiples of 3 then list= [ 2,3,0,5,0,7,0,0,0,11,0,13,0,0 ]

num=5, which is the next prime, but num is not <=√15.

Now we have generated all the prime numbers less than 15. Prime numbers less than 15 are 2, 3, 5, 7, 11, 13.
*/



#include <bits/stdc++.h>
using namespace std;

#define ll long long int
 
void SieveOfEratosthenes(ll n)
{
    
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
 
    for (ll p = 2; p * p <= n; p++) 
    {   
        if (is_prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
               is_prime[i] = false;
        }
    }
 
   
}
 
// Driver Code
int main()
{
    ll n = 30000004;
    SieveOfEratosthenes(n);
    return 0;
}