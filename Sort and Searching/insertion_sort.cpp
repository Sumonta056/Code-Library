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

#define ll long long
#define ull unsigned long long
#define pb push_back
#define pii pair<int, int>
#define pll pair<long, long>
#define mp(a, b) make_pair(a, b)
#define vi vector<int>
#define vll vector<ll>
#define vii vector<pii>
#define Mi map<int, int>
#define mii map<pii, int>
#define all(a) (a).begin(), (a).end()
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)x.size()
#define endl '\n'

#define F(i, s, e) for (ll i = s; i < e; ++i)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rem(i, a, b) for (int i = a; i > b; i--)
#define P(str) cout << str << endl

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define mod 1000000007
#define INF numeric_limits<ll>::max();
#define NINF numeric_limits<ll>::min();
const int N = int(1e5 + 3);

int main()
{
    fast;

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // * insertion sort
    // * Iterate from arr[1] to arr[n] over the array
    // * Compare the current element (key) to its previous
    // * If the key element is smaller than its previous, compare it to the elements before
    // * Move the greater elements one position up to make space for the swapped element

    // ! start form 2nd element
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];

            j = j - 1;
        }

        arr[j + 1] = key;
    }

    /*
    * how it works
    ! arrray 11 12 13 5 6 
    * in first loop i = 1 ; key = 11 ; j = i - 1 = 0
    * then , j >= 0 and arr[j] >  key
    ?  12 > 11 true enter the while loop
    * arr[j + 1] = arr[j]
    * arr[ 1] = arr [0]   - - -  arr[1] = 12
    * j = j --  ;  j = 0 - 1 = -
    ? loop breaks
    * arr[j+1]=key
    * arr[0] = 11
    ! arrray 11 12 13 5 6 
    * i = 2 ; key 13 ; j = 1
    * key is greater then arr[j]= arr[1]= 12
    ? will not enter while loop
    ! arrray 11 12 13 5 6 
    * i = 3  ; key = 5 ; j = 2
    * key is less then arr[j]=arr[2]= 13
    ? while loop entry
    * arr[j+1]=arr[j]  --  arr[3]=13
    * j == 1
    ? loop continue
    * arr[j+1]=arr[j]  --  arr[2]=12
    *  j == 0
    ? loop continue
    * arr[j+1]=arr[j]  --  arr[1]=11
    * j == -1
    ? loop breaks
    * arr[j+1]= key -- arr[0] = 5
    ! array 5 11 12 13 6
    */

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
