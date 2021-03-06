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

#define ll          long long
#define ull         unsigned long long
#define pb          push_back
#define pii         pair<int,int>
#define pll         pair<long,long>
#define mp(a,b)     make_pair(a,b)
#define vi          vector<int>
#define vll         vector<ll>
#define vii         vector<pii>
#define Mi          map<int,int>
#define mii         map<pii,int>
#define all(a)      (a).begin(),(a).end()
#define f           first
#define s           second
#define lb          lower_bound
#define ub          upper_bound
#define sz(x)       (int)x.size()
#define endl         '\n'

#define F(i,s,e)    for(ll i=s;i<e;++i)
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define rem(i,a,b)  for(int i=a;i>b;i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)  


#define mod   1000000007
#define INF   numeric_limits<ll>::max();
#define NINF  numeric_limits<ll>::min();
const int N = int(1e5 + 3);

int binary_search( ll a[] , ll low , ll high, ll find)
{
  
   if ( low <= high)
   {
      int mid ;
      mid = (low + high) /2;

      
      if(a[mid] == find) return mid ;

      
      if(a[mid] > find) return binary_search(a ,low , mid-1 , find );

      
      else return binary_search(a ,mid+1 , high , find );
   }

   
   return -1;
}

int main()
{ 
    fast;

    int n , k ;
    cin >> n >> k ;

    ll arr[n] ;

    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    for( int i = 0 ; i < k ; i++)
    {
        ll find ;
        cin >>find;

        ll ans ;
        ans = binary_search(arr , 0 , n-1 , find);

        if( ans == -1 ) cout<<"NO"<<endl;
        else cout <<"YES"<<endl;
    }
    


}


