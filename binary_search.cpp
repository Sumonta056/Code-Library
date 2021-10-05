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

int binary_search ( int a[] , int low , int high, int find)
{
   // * check high is greater than low or not
   if ( low <= high)
   {
      int mid ;
      mid = (low + high) /2;

      // * base case
      if(a[mid] == find) return mid ;

      //* first logic
      if(a[mid] > find) return binary_search(a ,low , mid-1 , find );

      //* 2nd logic
      else return binary_search(a ,mid+1 , high , find );
   }

   //* in case we dont find the element in array
   return -1;
}

int main()
{ 
    fast;
    // ? tle is o(logn)

    int find; 
    cin  >> find;
    
    int n = 10 ;
    int arr[n];

    for( int i = 0 ; i < n ; i++)
    {
        cin >> arr[i] ;
    }

    // * first sort the array
    sort(arr , arr+n);

    // * call a fucntion  for binary function 

    int ans ;
    ans = binary_search( arr , 0 , n-1 , find);

    if( ans == -1 ) cout<< " Not present";
    else cout <<arr[ans]<<" is present";
    
    /*

    * how binary search works
    * arr = 4 6 7 1 3 2 5 9 8 10
    * sort array arr = 1 2 3 4 5 6 7 8 9 10
    * then call function
    * check 3 is present or not
    * 3 < mid = 5
    * arr 1 2 3 4 5
    * 3 = mid return ans
    * else it will continue like this

    */


}


