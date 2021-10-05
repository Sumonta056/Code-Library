// ** Sumonta Saha Mridul **
// SWE - SUST


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)


int main()
{
    fast;

ll a = 3978432 , b = 5 , n = 1000000007 ;

ll res = 1;

while(b>0)
{
       if(b%2!=0)   
                   {
                        res=  ( res%n * a%n ) % n ;
                    }

     a= ( a%n  * a%n  ) % n;
     b = b / 2 ;    
}

cout << res ;

 

}