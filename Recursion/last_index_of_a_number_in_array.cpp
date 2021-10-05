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

int findIndex(int arr[], int idx, int K)
{
 
    // Base Case
    if (idx < 0)
        return -1;
 
    // Return Statement
    if (arr[idx] == K) {
        return idx;
    }
 
    // Recursive Call
    return findIndex(arr, idx - 1, K);
}
 
// Driver Code
int main()
{
 
    int arr[] = { 3, 1, 4, 4, 2, 3, 1 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int K = 4;
 
    // Function call
    cout << findIndex(arr, N - 1, K);
 
    return 0;
}