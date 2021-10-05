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
{
fast;

ll n;
cin>>n;

int arr[n];

for(int i = 0 ; i<n ; i++) cin>>arr[i];

ll i = 0 , j = n - 1;
ll sum1 = 0 , ans = 0 , sum3 = 0;

while(i<=j)
{
    if(sum1<=sum3) 
      {
          sum1 = sum1 + arr[i];
          i++;
      }

    else
    {
        sum3 = sum3 + arr[j] ;
        j--;
    }

    if(sum1 ==  sum3)
    {
        ans = max ( ans , sum1 );
    }
      
}

cout<<ans<<endl;



}