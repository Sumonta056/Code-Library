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


int main()
{ 
    fast;

    int n ;
    cin >> n ;

    int arr[n];

    for( int i = 0 ; i < n ; i++) cin >> arr[i];

    // * selection sort 
    // * in first step u have set the first element of the array as minimum value
    // * and compare it with others value and find the lowest value then it
    // * swap those to numbers

    // ? a loop to for each element 
    // ! i < n-1 because last element will automatically sorted 

    for ( int i = 0 ; i < n-1 ; i++ )
    {
        //* set 1st element as minimum value
        int min = i ;

        //* loop for comparing and find lowest value than it
        for ( int j = i + 1 ; j < n ; j++ )
        {
            if( arr[j] < arr[min]) min =  j ;
        }
        
        //* swap the 1st element with lowest number
        swap(arr[i], arr[min]);


    }
    /*
    * how it works
    * array = 14 33 27 10 35 19 42 44
    * minimum = 14 and start loop
    * after loop minimumnew = 10
    * so swap two number
    * array = 10 33 27 14 35 19 42 44
    *  it will continue like this
    * 10 14 27 33 35 19 42 44
    * 10 14 19 33 35 27 42 44
    * ..... 

    */

    for ( int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    


}


