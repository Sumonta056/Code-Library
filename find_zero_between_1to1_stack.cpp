//        ** Sumonta Saha Mridul **                                    SWE - SUST 
/*     

         ######    ##     ##  ##     ##   #######   ##    ##   ########      ###
        ##    ##   ##     ##  ###   ###  ##     ##  ###   ##      ##        ## ##
        ##         ##     ##  #### ####  ##     ##  ####  ##      ##       ##   ##
         ######    ##     ##  ## ### ##  ##     ##  ## ## ##      ##      ##     ##
              ##   ##     ##  ##     ##  ##     ##  ##  ####      ##      #########
        ##    ##   ##     ##  ##     ##  ##     ##  ##   ###      ##      ##     ##
         ######     #######   ##     ##   #######   ##    ##      ##      ##     ##

*/
#include <bits/stdc++.h>
using namespace std;


#define F(i,s,e) for(ll i=s;i<e;++i)
#define ll long long
#define pb push_back
using vll = vector<ll>;
#define P(str) cout << str << endl
#define endl '\n'
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  
   
const int N = int(1e5 + 3);


int main()
{ fast;
 
ll t ;
cin>> t ; 

for(ll j = 0 ; j < t ; j++)
{

ll n;
cin>>n;

stack< ll > con ;
ll total = 0 , zero = 0;

for(ll i = 0 ; i< n ; i++)
{ 
    ll x;
    cin>>x;

    if(x == 1 )
    {
        con.push(x);
        total = total + zero ;
        zero = 0 ;
    }

    else
    {
       if(!con.empty()) zero++ ;  // 00  1 00 first 2 zero will not counted because stack was empty
    }
// 1 00 1 000
// as there is ending 1 so zero = 3 will not be counted    
}

cout << total <<endl ;

}

}