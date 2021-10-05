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


bool sort( int a[] , int size)
{
    if( size == 0 || size == 1) return true; //base case

    if( a[0] > a[1]) return false ; // base case

    else return sort( a+1 , size -1); 

    // here my array was  2 3 4 5 6
    // i am recalling funtion by pass 3 4 5 6
    // again 4 5 6

    // for passing using pointer like a+1


}

int main()
{ 
    fast;

    int arr[] = {2 , 4 , 3 ,5, 6} ;

    cout<<sort( arr , 5) ;


   // 0 false
   // 1 true
    

}