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
 
ll t;
cin>>t ;

for(int j = 0 ; j < t ; j++)
{
    ll n ;
    cin>>n ;
    
    string s ;
    cin>>s;
    
    ll brac = 0 , ans = 0 ;

    for(ll i = 0 ; i < n ; i++)
    {
        if(s[i] == '(' )  brac++ ;

        else 
        {
            brac-- ;

            if( brac < 0)  
            {
                ans++ ;
                brac = 0;
            }
        } 
    }

    cout<<ans<<endl;
}



}